# C Projects: ATM Machine & To-Do List Manager
This repository contains two simple C language projects using structures and menu-driven interfaces:

1. ATM Machine Simulation 
2. To-Do List Manager 

Each project helps in understanding real-world logic building using the C language.

## 1. ATM Machine Simulation 
A basic simulation of ATM functionalities built in C.

Features:
- User authentication using PIN (default: 5341)
- Deposit money
- Withdraw money with balance check
- Check account balance
- View transaction history (up to 100 entries)
- Change account PIN

Menu:
1. Deposit
2. Withdrawal
3. Balance Enquiry
4. Transaction History
5. Pin Change
6. Exit

Highlights:
- Uses structures (`struct`) to store user and transaction details
- Tracks transactions in memory
- Handles incorrect PIN with a limit of 3 attempts

## 2. To-Do List Manager 
A basic task manager built in C to track tasks, deadlines, and priorities.

Features:
- Add a task with a name, days left, and priority 
- Prevents duplicate task names
- Remove a task by name
- Display all tasks in a tabular format

Menu:
1. Add Task
2. Remove Task
3. Display Tasks
4. Exit

Highlights:
- Uses structures to manage task data
- Shifts array elements after deletion
- Displays tasks clearly with aligned formatting

## Project Structure
C-Projects-ATM-ToDo/
├── ATM.c         --> ATM simulation source code
├── ToDoList.c    --> To-Do list manager source code
└── README.md     --> This file

## Author
Bala Sai Kumar  
GitHub: https://github.com/BalaSaiKumarVemula  
LinkedIn: https://linkedin.com/in/bala-sai-kumar-vemula-821a49264

## License
This project is free to use for learning and personal use.
