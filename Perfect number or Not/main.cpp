#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, i = 1, sum = 0;

    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "\n";

    while (i<n) {
        if (n%i == 0)
            sum = sum + i;
            i++;
    }

    if (sum == n)
        cout << i << "  is a perfect number";
    else
        cout << i << "  is not a perfect number";

    cout << "\n";

    return 0;
}
