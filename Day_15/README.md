# Operating System Course - Day 15

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Code Quality](https://img.shields.io/badge/Code%20Quality-A-brightgreen?style=for-the-badge)]()
[![Date](https://img.shields.io/badge/Date-04.21.2024-orange?style=for-the-badge)]()

## 📋 Daily Content

### 🎯 Programming Exercises

1. **Basic Process Creation**  
`fork()` system call demonstration
2. **Nested Process Creation**  
Double `fork()` hierarchy demonstration
3. **Parent-Child Identification**  
`fork()` return value handling
4. **Process-specific Calculations**  
Separate summation ranges for parent/child
5. **Parameterized Process Work**  
Different numerical ranges for parent/child

## 📊 Implementation Results

| Exercise | Description | Output |
|---|---|---|
| Basic Fork | Single process creation | ![Output 1](output/1.png) |
| Nested Fork | Process hierarchy demo | ![Output 2](output/2.png) |
| Parent-Child ID | Process identification | ![Output 3](output/3.png) |
| Range Calculations | Separate summations | ![Output 4](output/4.png) |
| Parameterized Work | Numerical range division | ![Output 5](output/5.png) |

## Technical Notes
- All programs use `unistd.h` for process management
- Tested on Windows Subsystem for Linux (WSL2)
- Output demonstrates concurrent process execution
- Includes proper header files for POSIX compliance