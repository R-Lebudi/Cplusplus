#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    int n;

    int Superman;

    cout << "Enter the number of X: " << endl;
    cin >> x;

    cout << "Enter the number of Y: " << endl;
    cin >> y;

    cout << "Enter the number of Z: " << endl;
    cin >> z;

    cout << "Enter the number of N: " << endl;
    cin >> n;

    cout << "\n";

    int sum = x + y + z + n;
    cout << "Sum =: " << sum << endl;

    cout << "\n";

    int multi = x * y * z * n;
    cout << "Multiplication =: " << multi << endl;

    cout << "\n";

    int div = x / y / z / n;
    cout << "Division =: " << div << endl;

    cout << "\n";

    int sub = x - y - z - n;
    cout << "Subtraction =: " << sub << endl;

    cout << "\n";

    Superman = (x * n - y / n) /n;
    cout << "Superman =: " << Superman << endl;

    return 0;
}
