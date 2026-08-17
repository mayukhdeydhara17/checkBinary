# Binary Number & 1's Complement in C++

## 📌 Project Overview

This is a simple **C++ Object-Oriented Programming (OOP)** project that works with binary numbers.

The program:

* Takes a binary number as input.
* Checks whether the input contains only `0` and `1`.
* Displays the original binary number.
* Calculates its **1's complement**.
* Displays the complemented binary number.

The project demonstrates how **classes, objects, member functions, strings, loops, and conditional statements** work together in C++.

## 🚀 Features

* 🔢 Binary number input
* ✅ Binary input validation
* 🔄 1's complement calculation
* 🖥️ Original binary number display
* 📊 Complemented binary number display
* 🛑 Invalid input detection

## 🧠 How 1's Complement Works

In a binary number, the **1's complement** is obtained by changing:

```text
0 → 1
1 → 0
```

### Example

```text
Original:     10110010
1's Complement: 01001101
```

## 🏗️ OOP Concepts Used

### Class

The program creates a `binary` class to store and manipulate the binary number.

### Object

An object named `b` is created in `main()`:

```cpp
binary b;
```

### Member Functions

The class contains several functions:

* `read()` → Takes binary input.
* `chk_bin()` → Checks whether the input is valid.
* `display()` → Displays the original binary number.
* `ones_complement()` → Calculates the 1's complement.
* `display_complement()` → Displays the complemented number.

## 🔍 Program Flow

```text
Start
  ↓
Enter Binary Number
  ↓
Check Binary Input
  ↓
Is Input Valid?
 ┌───────────────┐
 │               │
No              Yes
 ↓               ↓
Error        Display Number
                ↓
          Calculate 1's Complement
                ↓
          Display Complement
                ↓
               End
```

## 💻 Example Output

```text
Enter your binary number
101101

DISPLAYING YOUR BINARY NUMBER
101101

DISPLAYING YOUR COMPLEMENTED BINARY NUMBER
010010
```

### Invalid Input Example

```text
Enter your binary number
102101

INVALID BINARY INPUT
```

## 🛠️ Technologies Used

* **Language:** C++
* **Concept:** Object-Oriented Programming
* **Header Files:** `<iostream>`, `<string>`

## 🎯 Learning Objectives

This project helped me practice:

* Classes and objects
* Access specifiers
* Member functions
* `string` manipulation
* `for` loops
* `if-else` conditions
* Character comparison
* Input validation
* Basic binary operations
* OOP-based program structure

## 🔮 Future Improvements

Possible improvements include:

* Add **2's complement**
* Add binary addition
* Add binary subtraction
* Add decimal-to-binary conversion
* Add binary-to-decimal conversion
* Create a menu-driven interface
* Improve error handling

## 📚 Conclusion

This project is a small but useful introduction to **OOP in C++**. It combines basic programming concepts with binary number operations and provides a practical way to understand how classes and member functions can be used to organize a program.
