#include <iostream>

using namespace std;

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
        {
        for (j = 1; j < (i * 2); j++)
        {
            cout << "*";
        }
            cout << "\n";
        }

    for (i = 5; i >= 1; i--)
        {
        for (j = 1; j < (i * 2); j++)
        {
            cout << "*";
        }
           cout << "\n";
        }


    return 0;
}
