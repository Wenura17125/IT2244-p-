# Operating System Course - Day 16

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Process Management](https://img.shields.io/badge/Concept-Processes-blue?style=for-the-badge)]()
[![Date](https://img.shields.io/badge/Date-04.21.2024-orange?style=for-the-badge)]()

## 📋 Daily Content

### 🎯 Programming Exercises

1. **Basic Process Hierarchy**  
`fork()` demonstration with parent/child identification
2. **Complex Process Tree**  
Multi-level process creation with waitpid()

## 📊 Implementation Results

| Exercise | Description | Output |
|---|---|---|
| Process Hierarchy | Parent-child relationship demo | ![Output 1](output/1.png) |
| Process Tree | Multi-level process creation | ![Output 2](output/2.png) |

## Technical Notes
- Uses `sys/wait.h` for process synchronization
- Implements PID/PPID tracking
- Demonstrates zombie process prevention
- Tested on Windows Subsystem for Linux