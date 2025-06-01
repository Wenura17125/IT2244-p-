# Operating System Course Repository

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Code Quality](https://img.shields.io/badge/Code%20Quality-A-brightgreen?style=for-the-badge)]())

## Course Overview
Implementation of Inter-Process Communication (IPC) using Message Queues in C programming.

## Code Implementation
The implementation consists of two main components in `new.c`:
1. Message Sender
2. Message Receiver

### Message Queue Structure
```c
struct mesg_buffer {
    long mesg_type;
    char mesg_text[100];
} message;
```

### Key Features
- Uses `ftok()` to generate a unique key
- Implements message queue creation using `msgget()`
- Sends messages using `msgsnd()`
- Receives messages using `msgrcv()`
- Includes proper error handling

## Usage Instructions
1. Compile the C program:
   ```bash
   gcc new.c -o output
   ```
2. Run the compiled program to see the message queue in action

## Output Demonstration
The implementation results can be viewed in the following output:

![Send and Receive Output](Output/send%20and%20receiver.png)

<div align="center">
  🖥️ **Systems Programming** | 🔄 **Inter-Process Communication** | 📚 **Message Queues**
</div>
