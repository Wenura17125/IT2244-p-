#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MAX 100

struct mesg_buffer {
    long mesg_type;
    char mesg_text[MAX];
} message;

int main() {
    key_t key;
    int msgid;

    // Generate unique key (use existing path, e.g. current directory)
    key = ftok(".", 125);
    if (key == -1) {
        perror("ftok failed");
        exit(EXIT_FAILURE);
    }

    // Create message queue and get id
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget failed");
        exit(EXIT_FAILURE);
    }

    message.mesg_type = 1;

    printf("Write Data: ");
    if (fgets(message.mesg_text, MAX, stdin) == NULL) {
        perror("fgets failed");
        exit(EXIT_FAILURE);
    }

    // Remove trailing newline
    message.mesg_text[strcspn(message.mesg_text, "\n")] = '\0';

    // Send message (exclude size of mesg_type)
    if (msgsnd(msgid, &message, strlen(message.mesg_text) + 1, 0) == -1) {
        perror("msgsnd failed");
        exit(EXIT_FAILURE);
    }

    printf("Data sent: %s\n", message.mesg_text);

    return 0;
}