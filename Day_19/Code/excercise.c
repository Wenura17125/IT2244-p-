//Excercise 1
//IPC using message queue
//read input from the parent process
//Enter name:hi
//Enter RegNo:1234
//Enter age:24
//Message sent successfully

//give the output in the child process
//Received name:hi
//Received RegNo:1234
//Received age:24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_SIZE 100

struct message {
    long mtype;
    char mtext[MAX_SIZE];
};

int main() {
    int pid;
    int msgid;
    struct message msg;

    // Create message queue
    msgid = msgget(IPC_PRIVATE, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget failed");
        exit(EXIT_FAILURE);
    }

    pid = fork();
    if (pid == -1) {
        perror("fork failed");
        msgctl(msgid, IPC_RMID, NULL);
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // Child process: receive all three messages first
        char name[MAX_SIZE], regno[MAX_SIZE], age[MAX_SIZE];

        if (msgrcv(msgid, &msg, MAX_SIZE, 1, 0) == -1) {
            perror("msgrcv for name");
            exit(EXIT_FAILURE);
        }
        strcpy(name, msg.mtext);

        if (msgrcv(msgid, &msg, MAX_SIZE, 1, 0) == -1) {
            perror("msgrcv for RegNo");
            exit(EXIT_FAILURE);
        }
        strcpy(regno, msg.mtext);

        if (msgrcv(msgid, &msg, MAX_SIZE, 1, 0) == -1) {
            perror("msgrcv for age");
            exit(EXIT_FAILURE);
        }
        strcpy(age, msg.mtext);

        // Now print exactly as requested:
        printf("Received name: %s\n", name);
        printf("Received RegNo: %s\n", regno);
        printf("Received age: %s\n", age);

        // Remove the message queue
        msgctl(msgid, IPC_RMID, NULL);
        exit(0);
    }

    // Parent process: read inputs
    char name[MAX_SIZE], regno[MAX_SIZE], age[MAX_SIZE];

    printf("Enter name: ");
    fflush(stdout);
    fgets(name, MAX_SIZE, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter RegNo: ");
    fflush(stdout);
    fgets(regno, MAX_SIZE, stdin);
    regno[strcspn(regno, "\n")] = '\0';

    printf("Enter age: ");
    fflush(stdout);
    fgets(age, MAX_SIZE, stdin);
    age[strcspn(age, "\n")] = '\0';

    // Send messages
    msg.mtype = 1;

    strncpy(msg.mtext, name, MAX_SIZE);
    if (msgsnd(msgid, &msg, strlen(msg.mtext) + 1, 0) == -1) {
        perror("msgsnd for name");
        exit(EXIT_FAILURE);
    }

    strncpy(msg.mtext, regno, MAX_SIZE);
    if (msgsnd(msgid, &msg, strlen(msg.mtext) + 1, 0) == -1) {
        perror("msgsnd for RegNo");
        exit(EXIT_FAILURE);
    }

    strncpy(msg.mtext, age, MAX_SIZE);
    if (msgsnd(msgid, &msg, strlen(msg.mtext) + 1, 0) == -1) {
        perror("msgsnd for age");
        exit(EXIT_FAILURE);
    }

    printf("Message sent successfully\n");

    // Wait for child to finish printing
    wait(NULL);

    return 0;
}

