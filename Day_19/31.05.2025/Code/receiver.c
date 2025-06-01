#include <stdio.h>
#include <stdlib.h>
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

    // Generate unique key (must match sender)
    key = ftok(".", 125);
    if (key == -1) {
        perror("ftok failed");
        exit(EXIT_FAILURE);
    }

    // Get message queue id
    msgid = msgget(key, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget failed");
        exit(EXIT_FAILURE);
    }

    // Receive message of type 1
    if (msgrcv(msgid, &message, sizeof(message.mesg_text), 1, 0) == -1) {
        perror("msgrcv failed");
        exit(EXIT_FAILURE);
    }

    printf("Received Data: %s\n", message.mesg_text);

    // Optionally, delete the message queue when done
    // Uncomment the following if you want to remove the queue
    /*
    if (msgctl(msgid, IPC_RMID, NULL) == -1) {
        perror("msgctl(IPC_RMID) failed");
        exit(EXIT_FAILURE);
    }
    */

    return 0;
}