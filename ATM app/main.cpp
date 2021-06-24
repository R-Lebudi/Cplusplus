#include <iostream>

using namespace std;

int main()
{
    double balance, withdraw, deposit, overdraft;
    balance = 0;
    int input;

    cout << "Press 1 to display BALANCE \n"
         << "Press 2 to DEPOSIT money into the account \n"
         << "Press 3 to WITHDRAW money from the account \n"
         << "Press 4 for an OVERDRAFT from the account \n"
         << "Press 9 to EXIT \n"
         << "\n"

    << " Enter Choice:  ";
    cin >> input;

    while(input != 9) {
        switch(input){
            case 1: cout << " The current balance in your account is: " << balance << endl;
            break;
            case 2: cout << " Enter the amount you want to add into your account: ";
            cin >> deposit;
            balance = balance + deposit;
            cout << " You have deposited in " << deposit << " into your account." << endl;
            break;
            case 3: cout << " Enter the amount you want to withdraw from your account: ";
            cin >> withdraw;
            balance = balance - withdraw;
            cout << " You have withdrawn " << withdraw << " from your account." << endl;
            break;
            case 4: cout << " Enter the amount you want to overdraft your account: " <<endl;
            cin >> overdraft;
            balance = balance - overdraft;
            cout << " You have over drafted " << overdraft << " from your account." << endl;
            cout << " The total overdraft amount to be repaid is: " << endl;
            cout << ((balance)*20/100 - overdraft) << "\n";
            balance = ((balance)*20/100 - overdraft);
            break;
            default:
                cout << " You have entered an invalid input." << endl;
                cout << "\n";
        }
        cout << "Enter choice:  ";
        cin >> input;
    }
    return 0;
}
