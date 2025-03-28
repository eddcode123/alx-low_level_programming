# 0x01. C - Variables, if, else, while

## Overview
**Language**: C  
**Weight**: 1  
**Duration**: Oct 6, 2023, 6:00 AM - Oct 7, 2023, 6:00 AM  
**Auto QA Review**: 45.5/70 mandatory, 13.65/21 optional  
**Final Score**: 107.25%  
- Mandatory: 65.0%  
- Optional: 65.0%  

## Concepts
This project is designed to help you learn and apply the following concepts:
- Using Docker & WSL on your local host (if struggling with the sandbox).

## Resources
### Read or Watch
- **[Everything you need to know to start with C](resources/Everything_you_need_to_know_to_start_with_C.pdf)** (Focus on sections: comments, data types, variables, arithmetic operators, if...else statements, while loops).
- **Keywords and identifiers**  
- **Integers**  
- **Arithmetic Operators in C**  
- **If statements in C**  
- **if...else statement**  
- **Relational operators**  
- **Logical operators**  
- **While loop in C**  

### Man or Help Pages
- `ascii`

### Additional Resources
- **Introduction to C (Basic structure and variables)**  

---

## Learning Objectives
By the end of this project, you will be able to:
- Understand arithmetic, logical, and relational operators.
- Distinguish values considered `TRUE` and `FALSE` in C.
- Use boolean operators and control statements (`if`, `if...else`).
- Declare and assign values to `char`, `int`, and `unsigned int` variables.
- Use `printf` to print variable values.
- Implement `while` loops for repetitive tasks.
- Understand the ASCII character set.
- Apply `gcc` flags `-m32` and `-m64`.

---

## Requirements
- **Editors**: `vi`, `vim`, `emacs`
- **Compilation**: Ubuntu 20.04 LTS using `gcc` with `-Wall -Werror -Wextra -pedantic -std=gnu89` options.
- All files should end with a new line.
- Code must adhere to the **Betty** style guide.

---

## Tasks

### 0. Positive anything is better than negative nothing
- **File**: `0-positive_or_negative.c`
- **Description**: Prints whether a randomly generated number is positive, negative, or zero.
- **Example**:
  ```bash
  $ ./0-positive_or_negative
  561319348 is positive
