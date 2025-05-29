# Operating System Course - Day 17

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Process Sync](https://img.shields.io/badge/Concept-Synchronization-blue?style=for-the-badge)]()
[![Date](https://img.shields.io/badge/Date-04.21.2024-orange?style=for-the-badge)]()

## 📋 Daily Content

### 🎯 Programming Exercises

1. **Zombie Process Prevention**  
`wait()` system call implementation
2. **Sequential Process Execution**  
Ordered process creation with delays
3. **Process Status Monitoring**  
`WIFEXITED` and `WEXITSTATUS` usage

## 📊 Implementation Results

| Exercise | Description | Output |
|---|---|---|
| Zombie Prevention | Process cleanup demo | ![Output 1](Output/1.png) |
| Sequential Execution | Ordered process flow | ![Output 2](Output/2.png) |
| Status Monitoring | Exit code handling | ![Output 3](Output/3.png) |

## Technical Notes
- Uses `sys/wait.h` for process synchronization
- Implements proper error handling with `perror()`
- Demonstrates exit status interpretation
- Tested on Windows Subsystem for Linux