# 🧮 C Calculator

A simple command-line calculator built with the **C programming language**. This project allows users to perform basic arithmetic operations through an interactive menu.

## 📌 Features

- ➕ **Addition** — Add two integers.
- ➖ **Subtraction** — Subtract one integer from another.
- ✖️ **Multiplication** — Multiply two integers.
- ➗ **Division** — Divide one integer by another.
- 🔄 **Interactive Menu** — Choose operations using a numbered menu.
- 🚪 **Exit Option** — Leave the program when finished.

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** GCC
- **Standard Library:** `stdio.h`

## 📋 Requirements

Before running the project, make sure you have:

- GCC compiler installed.
- A terminal or command-line interface.
- A C source file named `calculator.c`.

## 🚀 Installation and Usage

### 1. Clone the repository

```bash
git clone YOUR_REPOSITORY_URL
cd YOUR_REPOSITORY_NAME
```

Replace the placeholders with your GitHub repository URL and repository name.

### 2. Compile the program

```bash
gcc calculator.c -o calculator
```

### 3. Run the calculator

On Linux:

```bash
./calculator
```

## 💻 Example Output

```text
===== CALCULATOR =====
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit

Choose an option: 1
Enter number1: 10
Enter number2: 5
15
```

## 📂 Project Structure

```text
c-calculator/
├── calculator.c
└── README.md
```

## 📚 What I Learned

Through this project, I practiced:

- Using variables and integer data types.
- Reading user input with `scanf()`.
- Displaying output with `printf()`.
- Using `switch` statements for menu selection.
- Using `do-while` loops to repeat operations.
- Performing basic arithmetic operations.
- Organizing a simple C program.

## ⚠️ Limitations

- The calculator currently works with integers only.
- Division by zero should be checked before performing division.
- Input validation can be improved to handle invalid user input.
- The exit condition should match the menu's exit option (`5`).

## 🔮 Future Improvements

- Add floating-point calculations.
- Handle division by zero safely.
- Improve input validation.
- Display clearer operation results.
- Add calculation history.
- Refactor repeated code into functions.

## 👨‍💻 Author

Created as a beginner project to practice programming in C.

---

⭐ If you find this project useful, consider giving the repository a star!
