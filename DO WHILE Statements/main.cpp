#include <iostream>

using namespace std;

int main()
{
    const string password = "Cplusplus";

    string input;

    do{
        cout << "Enter your password : " <<flush;
        cin >> input;

        if (input != password) {
            cout << "Access Denied " <<endl;
        }
    } while (input != password);
        cout << "Password Accepted " <<endl;

    return 0;
}
