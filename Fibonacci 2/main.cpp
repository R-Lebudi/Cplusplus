#include <iostream>

using namespace std;

int main()
{
int a = 0;

    cout << a << " ";

    int b = 1;

    cout << b << " ";

    int i, c;

    for (i = 1; i <= 13; i++){
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}
