# Operating System Course - Day 14

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Code Quality](https://img.shields.io/badge/Code%20Quality-A-brightgreen?style=for-the-badge)]()
[![Date](https://img.shields.io/badge/Date-04.21.2024-orange?style=for-the-badge)]()

## 📋 Daily Content

### 🎯 Programming Exercises
#### 1. Basic Process Creation
```c
// From code.txt lines 1-15
int main(){
    printf("\nHello World!");
    int f=fork();
    printf("PID: %d", getpid());
}
```
**Explanation:**
- Demonstrates basic fork() usage
- Shows parent/child process creation

#### 2. Process Hierarchy
```c
// From code.txt lines 61-92
int main(){
    int f = fork(); // Create B
    if (f == 0) {
        printf("\nI'm B");
    } else {
        fork(); // Create C
    }
}
```
**Explanation:**
- Creates process tree A → B and C
- Uses wait() for process synchronization

### 📊 Implementation Results
| Program | Description | Output |
|---------|-------------|--------|
| Basic Fork | Simple process creation | ![Output 1](Outputs/1.png) |
| Process Tree | Hierarchy demonstration | ![Output 2](Outputs/2.png) |
| Wait Example | Synchronization | ![Output 3](Outputs/3.png) |
| Full Hierarchy | Multi-process creation | ![Output 4](Outputs/4.png) |

<div align="center">
📖 **Process Management** | 🛠️ **Fork Operations** | 📊 **Synchronization**
</div>