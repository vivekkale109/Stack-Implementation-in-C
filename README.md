# 📚 Stack Implementation in C

## 📌 Project Description

This project demonstrates the implementation of a **Stack** using arrays in C.  
It includes basic stack operations such as:

- Push
- Pop
- Display

Additionally, it uses the stack data structure to **reverse a string**, showing a practical application of stack concepts.

---

## 🚀 Features

- Stack implementation using array
- Push operation
- Pop operation
- Display stack elements
- Reverse a string using stack
- Menu-driven interface
- Overflow and Underflow handling

---

## 🛠 Concepts Used

- Arrays
- Stack data structure (LIFO – Last In First Out)
- Functions
- switch statement
- Loops (for / while)
- Conditional statements
- String handling (string.h)

---

## 📂 Project Structure

Stack-Implementation/
│
├── stack.c        → Main source code
└── README.md      → Project documentation

---

## 📖 Stack Operations

### 1️⃣ Push
- Adds an element to the top of the stack.
- Checks for overflow condition.

### 2️⃣ Pop
- Removes the top element from the stack.
- Checks for underflow condition.

### 3️⃣ Display
- Shows all elements from top to bottom.

---

## 🔄 Reverse String Using Stack

### How It Works:

1. Each character of the string is pushed onto the stack.
2. Characters are popped one by one.
3. The popped sequence forms the reversed string.

### Example:

Input:  Hello  
Output: olleH  

This demonstrates the LIFO (Last In First Out) property of stack.

---

## ▶️ How to Compile and Run

Step 1: Compile  
gcc stack.c -o stack  

Step 2: Run  
./stack  

(For Windows)  
stack.exe  

---

## 🖥 Example Menu

1. Push  
2. Pop  
3. Display  
4. Reverse String  
5. Exit  

---

## ⚠ Error Handling

- Stack Overflow → When stack is full  
- Stack Underflow → When stack is empty  

---

## 🔮 Future Improvements

- Dynamic stack using linked list
- Infix to Postfix conversion
- Expression evaluation using stack
- Multiple stack implementation
- Graphical interface version

---

## 📋 Requirements

- GCC Compiler
- Works on Linux / Windows / macOS

---

## 📜 License

This project is open-source and free to use for educational purposes.
You may modify and improve it as needed.
