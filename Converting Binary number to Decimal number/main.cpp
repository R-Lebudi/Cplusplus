#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long bin;

    int decimal = 0, i = 0;

    cout << "Enter a binary number: ";
    cin >> bin;

    cout << "\n";

    while (bin != 0) {
        decimal = decimal + (bin % 10) * pow (2, i);
        i++;
        bin = bin / 10;
    }

    cout << "The decimal equivalent to this binary is: " << decimal;

    cout << "\n";

    return 0;
}
