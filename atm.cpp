#include <iostream>
#include <string>

using namespace std;

string UserId = "";
string userPassword = "";
double balance = 0.0;

void createAccount() {
    cout << "Please enter your user id: ";
    cin >> UserId;
    cout << "Please enter your password: ";
    cin >> userPassword;
    cout << "Thank you! Your account has been created!" << endl;
}

bool login() {
    string userId, password;
    cout << "Please enter your user id: ";
    cin >> userId;
    cout << "Please enter your password: ";
    cin >> password;

    if (userId == UserId && password == userPassword) {
        cout << "Access Granted!" << endl;
        return true;
    } else {
        cout << "*** LOGIN FAILED! ***" << endl;
        return false;
    }
}

void depositMoney() {
    double amount;
    cout << "Amount of deposit: $";
    cin >> amount;
    balance += amount;
    cout << "Deposited $" << amount << " to your account." << endl;
}

void withdrawMoney() {
    double amount;
    cout << "Amount of withdrawal: $";
    cin >> amount;
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrew $" << amount << " from your account." << endl;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

void requestBalance() {
    cout << "Your balance is $" << balance << "." << endl;
}

int main() {
    char option;
    cout << "Hi! Welcome to the ATM Machine!" << endl;

    do {
        cout << "Please select an option from the menu below:\n"
             << "l -> Login\nc -> Create New Account\nq -> Quit" << endl;
        cin >> option;

        if (option == 'c') {
            createAccount();
        } else if (option == 'l') {
            if (login()) {
                char choice;
                do {
                    cout << "d -> Deposit Money\nw -> Withdraw Money\nr -> Request Balance\nq -> Quit" << endl;
                    cin >> choice;

                    if (choice == 'd') {
                        depositMoney();
                    } else if (choice == 'w') {
                        withdrawMoney();
                    } else if (choice == 'r') {
                        requestBalance();
                    } else if (choice != 'q') {
                        cout << "Invalid choice, try again!" << endl;
                    }
                } while (choice != 'q');
            }
        } else if (option != 'q') {
            cout << "Invalid choice, try again!" << endl;
        }

    } while (option != 'q');

    cout << "Thank you for using the ATM Machine!" << endl;
    return 0;
}