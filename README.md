# Binary Number Validator in C++

A simple C++ program that accepts a binary number as input and checks whether it contains only `0` and `1`.

## 📌 Description

This project demonstrates the use of:

* Classes and objects
* Private data members
* Member functions
* `std::string`
* String indexing using `at()`
* Input validation

The program creates a `binary` class that stores a binary number as a string. The `chk_bin()` function checks every character and displays an error message if an invalid character is found.

## 🚀 How It Works

1. The program asks the user to enter a binary number.
2. The input is stored as a string.
3. Each character is checked.
4. If every character is either `0` or `1`, the input is considered valid.
5. If any other character is found, the program displays:

   ```text
   INVALID BINARY INPUT
   ```

## 💻 Example

### Valid Input

```text
Enter your binary number
101101
```

The input is valid, so the program terminates normally.

### Invalid Input

```text
Enter your binary number
101201
INVALID BINARY INPUT
```

Since `2` is not a valid binary digit, the program rejects the input.

## 🛠️ Requirements

* C++ compiler supporting C++11 or later
* A terminal or command prompt

## ▶️ Compilation and Execution

Using `g++`:

```bash
g++ main.cpp -o binary
./binary
```

On Windows:

```bash
g++ main.cpp -o binary.exe
binary.exe
```

## 📂 Project Structure

```text
.
├── main.cpp
└── README.md
```

## 📚 Concepts Demonstrated

This project is useful for beginners learning **Object-Oriented Programming (OOP) in C++**, particularly:

* Classes
* Objects
* Encapsulation
* Member functions
* Strings
* Loops
* Conditional statements
* Input validation

## 📄 License

This project is intended for educational and learning purposes.
