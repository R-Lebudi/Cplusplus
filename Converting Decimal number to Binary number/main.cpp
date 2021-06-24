#include <iostream>

using namespace std;

int main()
{
    int arr[100], i = 0, j, n;

    cout << "Enter a positive number: ";
    cin >> n;

    while (n > 0) {
        arr[i] = n % 2;
        i++;
        n = n / 2;
    }

    cout << "\n";

    cout << "Binary number is: ";

    for (j = i - 1; j >= 0; j--) {
        cout << arr[j];
    }

    cout << "\n";

    return 0;
}
