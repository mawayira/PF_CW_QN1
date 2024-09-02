# ATM System for Banking Project 

This project is a simple ATM (Automated Teller Machine) system implemented in C++. The system allows users to perform basic banking operations such as checking balance, withdrawing cash, and depositing cash. 

## Features

- **User Authentication**: Users must enter their account number and PIN to access their account.
- **Balance Inquiry**: Users can check their current account balance.
- **Cash Withdrawal**: Users can withdraw cash from their account, provided they have sufficient funds.
- **Cash Deposit**: Users can deposit cash into their account.
- **Transaction History**: Users can view a history of their recent transactions.
- **Exit**: Users can safely exit the ATM system.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang++)
- A text editor or IDE (e.g., Visual Studio Code, CLion)

### Installation

1. Clone the repository to your local machine:
   ```sh
   git clone https://github.com/mawayira/PF_CW_QN1.git

2. Navigate to the project directory:
- cd PF_CW_QN1

#### Compilation
Compile the project using a C++ compiler. For example, using gcc:
gcc main.cpp -o atm

#### Running the Program
After compilation, you can run the executable:
./atm

File Structure
- `main.cpp`: The main entry point of the ATM system.
- `account.h` / account.cpp: Contains the Account class and its related functions.
- `atm.h / atm.cpp`: Contains the ATM class that manages user interactions and transactions.
- `transaction.h` / transaction.cpp: Contains the Transaction class for managing transaction records.

#### Usage
1. Start the ATM system.
2. Enter your account number and PIN.
3. Choose an operation from the menu (e.g., check balance, withdraw cash, deposit cash).
3. Follow the prompts to complete the operation.
4. View your transaction history or exit the ATM.

#### Contributing
Contributions are welcome! If you have suggestions for improvements or new features, feel free to submit a pull request or open an issue.

#### License
This project is licensed under the MIT License - see the LICENSE file for details.

#### Author
MAWAYIRA JOHN PAUL <mawayirapaul12@gmail.com>