#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int arr[25];
    int n, n1, i, flag = 0;

    cout << "Enter Array Number: ";
    cin >> n;

    cout << "Enter Array Elements: ";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the Element to Search: ";
    cin >> n1;

    for (i = 0; i < n; i++){
        if (arr[i]==n1){
            flag = 1;
            cout << "Number " << n1 << " Found at Position " << i+1;
        }
    }

    if (flag == 0){
        cout << "Number not Found in the Array" << n1;
    }

    return 0;
}
