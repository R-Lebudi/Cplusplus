#include <iostream>

using namespace std;

int main()
{
    int a[10], i, se = 0, so = 0;

    cout << "Enter 10 numbers: ";

    for (i = 0; i <= 9; i++)
        cin >> a[i];

    for (i = 0; i <= 9; i++)
        if ((a[i]) % 2 == 0)
            se = se + a[i];
        else
            so = so + a[i];

    cout << "\n";

    cout << "Sum of Even numbers = " << se;

    cout << "\n";
    cout << "\n";

    cout << "Sum of Odd numbers = " << so;

    cout << "\n";

    return 0;
}
