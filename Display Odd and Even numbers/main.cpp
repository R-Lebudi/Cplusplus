#include <iostream>

using namespace std;

int main()
{
    int i;

    cout << "ODD NUMBERS:";
    cout << "\n\n";

    //  A loop to display odd numbers from 1 - 100
    for (i = 0; i <= 100; i++){
        if (i % 2 == 1){
            cout << " " << i << " ";
        }
    }

    cout << "\n\n";

    cout << "EVEN NUMBERS:";
    cout << "\n\n";

    //A loop to display even numbers from 1 - 100
    for (i = 0; i < 100; i++){
        if (i % 2 == 0){
            cout << " " << i << " ";
        }
    }

    cout << "\n";

    return 0;
}


    /* A loop to display even numbers from 1 - 10
    for (i = 0; i < 100; i++){
        if (i % 2 == 0){
            cout << " " << i << " ";
        }
    }

    cout << "\n";

    return 0;
}
*/
