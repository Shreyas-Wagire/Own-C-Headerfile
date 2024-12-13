# Own-C-Headerfile

Banking System in C

Description

This project is a simple console-based Banking System implemented in the C programming language. It allows users to perform basic banking operations such as:

Creating a new account

Depositing money

Withdrawing money

Checking the account balance

Exiting the system

The program uses modular design, with key functionalities defined in a header file (shreyas.h).

Features

Menu-driven interface: A clear and user-friendly menu.

Input validation: Ensures the user provides valid inputs.

Modular structure: Functions are modular and separated for ease of maintenance and extensibility.

Prerequisites

To compile and run this program, you need:

A C compiler such as GCC

A text editor or an IDE (e.g., VS Code, Code::Blocks)

How to Run the Program

Clone or download this repository to your local machine.

Ensure you have the shreyas.h file in the same directory as the main.c file.

Compile the code using the following command (assuming GCC):

gcc main.c -o banking

Run the compiled program:

./banking

Code Structure

main.c: Contains the main logic of the banking system.

shreyas.h: Contains function declarations for createAccount(), deposit(), withdraw(), and checkBalance().

Functional Overview

Menu Options:

Create Account: Prompts the user to create a new account.

Deposit: Allows the user to deposit money into their account.

Withdraw: Facilitates money withdrawal from an account, ensuring sufficient balance.

Check Balance: Displays the current balance of the account.

Exit: Exits the program with a goodbye message.

Input Validation:

The program checks for invalid inputs (e.g., non-numeric values) and prompts the user to try again, ensuring smooth operation.

Future Enhancements

Add persistent storage (e.g., file system or database) for account details.

Implement user authentication for better security.

Add more banking features, such as transferring funds between accounts.

License

This project is open-source and free to use under the MIT License.

