# Operating System IPC Implementation

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Code Quality](https://img.shields.io/badge/Code%20Quality-A-brightgreen?style=for-the-badge)]()
[![IPC Focus](https://img.shields.io/badge/Focus-Message%20Queues-blue?style=for-the-badge)]()
[![Date](https://img.shields.io/badge/Updated-05.2024-orange?style=for-the-badge)]()

## Project Overview
Implementation of Inter-Process Communication (IPC) using System V Message Queues in C, featuring:
- Parent-Child process communication
- Independent sender-receiver programs
- System call implementations for IPC
- Error handling and resource cleanup

## Code Examples

### 1. Parent-Child IPC (exercise.c)
Demonstrates message queue communication between parent and child processes:
- Parent process collects user data (name, registration number, age)
- Child process receives and displays the data
- Proper message queue creation and cleanup

### 2. Independent IPC Programs
#### Sender (sender.c)
- Creates message queue with unique key
- Accepts user input
- Sends data through message queue
- Implements error handling

#### Receiver (receiver.c)
- Connects to existing message queue
- Retrieves messages
- Displays received data
- Optional queue cleanup

## Implementation Results

### Exercise Output
![Exercise Demonstration](Output/excercise.png)

### Sender-Receiver Communication
![Sender-Receiver Demo](Output/send%20receive.png)

## Usage Instructions
1. Compile the programs:
   ```bash
   # For exercise.c
   gcc exercise.c -o exercise
   
   # For sender-receiver
   gcc sender.c -o sender
   gcc receiver.c -o receiver
   ```
2. Run the programs:
   ```bash
   # For exercise
   ./exercise
   
   # For sender-receiver (in separate terminals)
   ./sender
   ./receiver
   ```

## Key Features
- System V IPC implementation
- Error handling for IPC operations
- Resource cleanup
- Process synchronization
- User input validation

<div align="center">
  🖥️ **Systems Programming** | 🔄 **Inter-Process Communication** | 📚 **Message Queues**
</div>
