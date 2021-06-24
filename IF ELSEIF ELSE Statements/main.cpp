#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Enter Beverages prices: " << endl;
    cin >> x;

    if (x >= 22 ) {
        cout << " 1 liter Black Label" << endl;
    }
    else if (x > 18 ) {
        cout << " Corona " << endl;
    }
    else if (x > 13 ) {
        cout << " Apple juice " << endl;
    }
    else {
        cout << " Coke " << endl;
    }

    return 0;
}
