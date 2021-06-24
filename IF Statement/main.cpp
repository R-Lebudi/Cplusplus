#include <iostream>

using namespace std;

int main()
{
    string password = "325is";
    cout << "Enter password : " <<flush;

    string input;
    cin >> input;

    if (input == password) {
        cout << "Password Accepted " <<endl;
    }
    if (input != password) {
        cout << "Password Denied " <<endl;
    }

    return 0;
}
