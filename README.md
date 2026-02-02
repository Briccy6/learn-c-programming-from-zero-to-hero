# 🚀 Learn C Programming: From Zero to Hero

<div align="center">

![C Programming](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Progress](https://img.shields.io/badge/Progress-In_Progress-yellow?style=for-the-badge)
![Student](https://img.shields.io/badge/Student-RP_Tumba_College-red?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**A comprehensive journey through C programming - from basic syntax to advanced concepts**

*Daily updates tracking my learning progress at Rwanda Polytechnic - Tumba College*

</div>

---

## 📚 About This Repository

This repository documents my complete learning journey in C programming, starting from absolute basics to advanced topics. I commit daily progress, exercises, projects, and notes as I master the fundamentals of systems programming.

**Student:** Hirwa Alain Brian  
**Institution:** Rwanda Polytechnic (RP) - Tumba College  
**Program:** Software Engineering  
**Started:** [Add your start date]  
**Goal:** Master C programming and build real-world projects

---

## 🎯 Learning Objectives

By the end of this journey, I aim to:

- ✅ Understand C syntax, data types, and control structures
- ✅ Master pointers, memory management, and dynamic allocation
- ✅ Build command-line applications and utilities
- ✅ Understand file I/O and data structures in C
- ✅ Learn about system calls and low-level programming
- ✅ Develop debugging and problem-solving skills
- ✅ Complete 100+ practical exercises and projects

---

## 📖 Course Outline

### **Phase 1: Foundations (Weeks 1-3)**
- [x] Introduction to C and Setup
- [x] Basic Syntax and Structure
- [x] Variables and Data Types
- [x] Operators and Expressions
- [ ] Input/Output Operations
- [ ] Control Flow (if, switch, loops)

### **Phase 2: Intermediate Concepts (Weeks 4-6)**
- [ ] Functions and Scope
- [ ] Arrays and Strings
- [ ] Pointers Basics
- [ ] Structures and Unions
- [ ] File Handling
- [ ] Preprocessor Directives

### **Phase 3: Advanced Topics (Weeks 7-9)**
- [ ] Advanced Pointers (function pointers, void pointers)
- [ ] Dynamic Memory Allocation
- [ ] Linked Lists
- [ ] Stacks and Queues
- [ ] Trees and Graphs
- [ ] Recursion and Backtracking

### **Phase 4: Systems Programming (Weeks 10-12)**
- [ ] Memory Management
- [ ] Bit Manipulation
- [ ] System Calls
- [ ] Multi-file Projects
- [ ] Makefiles and Compilation
- [ ] Debugging with GDB

### **Phase 5: Projects (Ongoing)**
- [ ] Calculator Application
- [ ] File Encryption Tool
- [ ] Student Management System
- [ ] Simple Text Editor
- [ ] Mini Database System
- [ ] Custom Shell Implementation

---

## 📂 Repository Structure

```
learn-c-programming-from-zero-to-hero/
│
├── 01-basics/
│   ├── hello_world.c
│   ├── variables.c
│   ├── data_types.c
│   └── README.md
│
├── 02-control-flow/
│   ├── if_else.c
│   ├── switch_case.c
│   ├── loops.c
│   └── README.md
│
├── 03-functions/
│   ├── basic_functions.c
│   ├── recursion.c
│   ├── scope.c
│   └── README.md
│
├── 04-arrays-strings/
│   ├── arrays.c
│   ├── string_manipulation.c
│   ├── multidimensional_arrays.c
│   └── README.md
│
├── 05-pointers/
│   ├── pointer_basics.c
│   ├── pointer_arithmetic.c
│   ├── function_pointers.c
│   └── README.md
│
├── 06-data-structures/
│   ├── linked_list.c
│   ├── stack.c
│   ├── queue.c
│   └── README.md
│
├── 07-file-handling/
│   ├── file_read_write.c
│   ├── binary_files.c
│   └── README.md
│
├── 08-projects/
│   ├── calculator/
│   ├── student_management/
│   └── text_editor/
│
├── exercises/
│   ├── daily_challenges/
│   └── practice_problems/
│
├── notes/
│   ├── concepts.md
│   ├── best_practices.md
│   └── common_errors.md
│
└── README.md
```

---

## 📊 Progress Tracker

### Current Status: **Phase 1 - Foundations**

| Week | Topics Covered | Exercises Completed | Status |
|------|---------------|---------------------|--------|
| Week 1 | Setup, Hello World, Variables | 15/15 | ✅ Complete |
| Week 2 | Data Types, Operators, I/O | 8/20 | 🔄 In Progress |
| Week 3 | Control Flow, Loops | 0/25 | ⏳ Upcoming |

**Total Exercises Completed:** 23/200+  
**Days of Coding:** 12 days  
**Current Streak:** 🔥 5 days

---

## 🗓️ Daily Progress Log

### Week 2 (December 2024)

#### Day 12 - February 3, 2025
**Topics:** Operators and Expressions  
**What I Learned:**
- Arithmetic, relational, and logical operators
- Operator precedence and associativity
- Type casting and conversions

**Code Written:**
```c
// arithmetic_operations.c
#include <stdio.h>
int main() {
    int a = 10, b = 3;
    printf("Sum: %d\n", a + b);
    printf("Division: %.2f\n", (float)a / b);
    return 0;
}
```

**Exercises Completed:** 3  
**Challenges Faced:** Understanding implicit type conversion  
**Resources Used:** [Link to tutorial/video]

---

#### Day 11 - February 2, 2025
**Topics:** Input/Output Functions  
**What I Learned:**
- scanf() and printf() functions
- Format specifiers
- Getting user input

**Code Written:**
- `input_output.c` - Basic I/O operations
- `user_data.c` - Reading and displaying user data

**Exercises Completed:** 5  
**Notes:** Learned about buffer overflow issues with scanf()

---

### Week 1 (January 2024)

#### Day 1-10 Summary
- Set up development environment (GCC, VS Code)
- Learned basic C syntax and structure
- Completed 15 exercises on variables and data types
- Built first program: Simple calculator

---

## 🛠️ Development Environment

**Compiler:** GCC (GNU Compiler Collection)  
**IDE/Editor:** Visual Studio Code  
**Extensions:**
- C/C++ Extension Pack
- Code Runner
- Better C++ Syntax

**Operating System:** [Windows/Linux/macOS]  
**Version Control:** Git & GitHub

### How to Compile and Run

```bash
# Compile a C file
gcc filename.c -o output

# Run the compiled program
./output

# Compile with warnings
gcc -Wall -Wextra filename.c -o output

# Compile with debugging symbols
gcc -g filename.c -o output
```

---

## 📝 Key Concepts Learned

### 1. **Pointers** (Most Important!)
```c
int x = 10;
int *ptr = &x;  // ptr stores address of x
printf("%d", *ptr);  // Dereferencing: prints 10
```

### 2. **Memory Allocation**
```c
int *arr = (int*)malloc(5 * sizeof(int));
// Don't forget to free!
free(arr);
```

### 3. **Structures**
```c
struct Student {
    char name[50];
    int age;
    float gpa;
};
```

---

## 🎯 Projects Completed

### 1. ✅ Simple Calculator
**Description:** Command-line calculator supporting basic arithmetic operations  
**Technologies:** C, stdio.h  
**What I Learned:** Functions, switch statements, user input validation  
**[View Code →](./08-projects/calculator/)**

### 2. 🔄 Student Management System (In Progress)
**Description:** CRUD application for managing student records  
**Technologies:** C, file I/O, structures  
**Status:** 60% complete  
**[View Code →](./08-projects/student_management/)**

---

## 📚 Resources I'm Using

### Books
- "The C Programming Language" by Kernighan & Ritchie
- "C Programming Absolute Beginner's Guide" by Perry & Miller
- "Head First C" by David Griffiths

### Online Courses
- [CS50's Introduction to Computer Science](https://cs50.harvard.edu/)
- [C Programming Tutorial - freeCodeCamp](https://www.youtube.com/watch?v=KJgsSFOSQv0)

### Practice Platforms
- [HackerRank - C Challenges](https://www.hackerrank.com/domains/c)
- [LeetCode - C Problems](https://leetcode.com/)
- [Exercism - C Track](https://exercism.org/tracks/c)

### Documentation
- [C Reference - cppreference.com](https://en.cppreference.com/w/c)
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/)

---

## 🤝 How to Use This Repository

### For Fellow Learners:
1. **Clone the repository:**
   ```bash
   git clone https://github.com/briccy6/learn-c-programming-from-zero-to-hero.git
   cd learn-c-programming-from-zero-to-hero
   ```

2. **Navigate through folders** in order (01-basics → 02-control-flow → ...)

3. **Read the README** in each folder for topic explanations

4. **Try exercises** before looking at solutions

5. **Compile and run** the examples to see them in action

### For Contributors:
- Found an error? Open an issue!
- Have a better solution? Submit a pull request!
- Want to suggest resources? I'd love to hear them!

---

## 🏆 Achievements & Milestones

- ✅ **Day 1:** Wrote first "Hello, World!" program
- ✅ **Day 5:** Completed 10 exercises without errors
- ✅ **Day 10:** Built first functional project (Calculator)
- ⏳ **Day 30:** Master pointers and dynamic memory (Goal)
- ⏳ **Day 60:** Build a complete student management system (Goal)
- ⏳ **Day 90:** Contribute to an open-source C project (Goal)

---

## 🐛 Common Mistakes & Lessons Learned

### 1. Forgetting to Initialize Variables
```c
// ❌ WRONG
int x;
printf("%d", x);  // Undefined behavior

// ✅ CORRECT
int x = 0;
printf("%d", x);
```

### 2. Buffer Overflow with scanf()
```c
// ❌ DANGEROUS
char name[10];
scanf("%s", name);  // Can overflow if input > 9 chars

// ✅ SAFER
char name[10];
scanf("%9s", name);  // Limits input to 9 characters
```

### 3. Memory Leaks
```c
// ❌ MEMORY LEAK
int *ptr = malloc(sizeof(int) * 10);
// Forgot to free!

// ✅ PROPER CLEANUP
int *ptr = malloc(sizeof(int) * 10);
// ... use ptr ...
free(ptr);
```

---

## 💡 Tips for Success

1. **Code Every Day** - Even 30 minutes makes a difference
2. **Type, Don't Copy** - Typing code helps muscle memory
3. **Debug Your Own Code** - Use printf() debugging before asking for help
4. **Read Error Messages** - They often tell you exactly what's wrong
5. **Comment Your Code** - Future you will thank present you
6. **Practice Pointers** - They're hard but essential in C
7. **Build Projects** - Apply what you learn in real programs

---

## 📊 Stats

![GitHub commit activity](https://img.shields.io/github/commit-activity/m/briccy6/learn-c-programming-from-zero-to-hero?style=for-the-badge)
![GitHub last commit](https://img.shields.io/github/last-commit/briccy6/learn-c-programming-from-zero-to-hero?style=for-the-badge)
![GitHub repo size](https://img.shields.io/github/repo-size/briccy6/learn-c-programming-from-zero-to-hero?style=for-the-badge)

---

## 📞 Connect With Me

I'm documenting this journey publicly! Feel free to reach out if you're also learning C or have advice:

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://linkedin.com/in/alainbrian)
[![Twitter](https://img.shields.io/badge/Twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/briccy4)
[![Email](https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white)](mailto:hirwabrian9@gmail.com)

---

## 📄 License

This project is open source and available under the [MIT License](LICENSE).

---

<div align="center">

## ⭐️ Learning in Public

**If this repository helps you in your C programming journey, consider giving it a star! ⭐**

*"The best way to learn is to teach others what you're learning."*

---

**Last Updated:** February 3, 2025  
**Current Focus:** Operators and Expressions  
**Next Up:** Control Flow Statements

Made with ❤️ by [Hirwa Alain Brian](https://github.com/briccy6)

</div>
