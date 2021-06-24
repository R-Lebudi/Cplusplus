#include <iostream>

using namespace std;

int main()
{
    int a[] = {50, 20, 15, 85, 20, 10};

    int high = a[0];

    for ( int i = 1; i < 6; i++ )
        if ( a[i] > high )
            high = a[i];

    cout << "the highest element in the array:  " << high << endl;

    cout << "\n";

    int low = a[0];

    for ( int i = 1; i < 6; i++ )
        if ( a[i] < low )
            low = a[i];

    cout << "the lowest element in the array:  " << low << endl;

    return 0;
}
