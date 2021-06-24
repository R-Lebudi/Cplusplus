#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter person's age" << endl;
    cin >> age;

    if (age >= 18) {
        cout << "Person is an Adult!" << endl;
    }
    else if (age > 13) {
        cout << "Person is a Teenager!" << endl;
    }
    else if (age > 3) {
        cout << "Person is a Kid!" << endl;
    }
    else {
        cout << "It's a Baby!" << endl;
    }

    return 0;
}
