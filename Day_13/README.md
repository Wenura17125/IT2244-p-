# Operating System Course - Day 13

[![C Programming](https://img.shields.io/badge/Language-C-yellow?style=for-the-badge&logo=c)](https://en.cppreference.com/w/c)
[![Code Quality](https://img.shields.io/badge/Code%20Quality-A-brightgreen?style=for-the-badge)]()
[![Date](https://img.shields.io/badge/Date-04.21.2024-orange?style=for-the-badge)]()

## 📋 Daily Content

### 🎯 Programming Exercises
#### 1. Voting Eligibility Check
```c
// From code.txt lines 1-21
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    // Conditional logic here
}
```
**Explanation:**
- Accepts user age input
- Uses nested conditionals for eligibility check

#### 2. Fibonacci Series Generator
```c
// From code.txt lines 95-114
int x=0;
int y=1;
for(int i=1; i<=num; i++){
    printf("%d ",x);
    int z = x+y;
    x = y;
    y = z;
}
```
**Explanation:**
- Generates Fibonacci sequence iteratively
- Implements sequence using temporary variables

### 📊 Implementation Results
| Program | Description | Output |
|---------|-------------|--------|
| Voting Check | Age validation logic | ![Output 1](Outputs/1.png) |
| Ternary Operator | Compact conditional | ![Output 2](Outputs/2.png) |
| Weekday Mapping | Switch-case demo | ![Output 3](Outputs/3.png) |
| Life Path Number | Numerology calculator | ![Output 4](Outputs/4.png) |
| Fibonacci Series | Iterative sequence | ![Output 5](Outputs/5.png) |
| Factorial Calc | Mathematical operation | ![Output 6](Outputs/6.png) |
| While Loop Demo | Countdown example | ![Output 7](Outputs/7.png) |
| String Concatenation | Text manipulation | ![Output 8](Outputs/8.png) |
| Binary Converter | Base-2 to base-10 | ![Output 9](Outputs/9.png) |
| Array Min/Max | Value extraction | ![Output 10](Outputs/10.png) |
| Pascal's Triangle | Combinatorial output | ![Output 11](Outputs/11.png) |

<div align="center">
📖 **Control Structures** | 🛠️ **Algorithms** | 📊 **Math Operations**
</div>