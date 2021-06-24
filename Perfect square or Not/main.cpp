#include <iostream>

using namespace std;

int main()
{
    int num, perfectSquare = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if  (i * i == num) {
            perfectSquare = 1;
            break;
        }
        if (i * i > num) {
            break;
        }
    }

    cout << "\n";

    if (perfectSquare) {
        cout << "The inputted number is a perfect square.";
    }
    else {
        cout << "The inputted number is not a perfect square.";
    }

    cout << "\n";

    return 0;
}
