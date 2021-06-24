#include <iostream>

using namespace std;

int main()
{
    int a = 1, b = 0 , c;

    while (b <= 144){
        cout << " " << b << " ";
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
