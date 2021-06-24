#include <iostream>

using namespace std;

int main()
{
    const int array_size = 10;
    int num[array_size];
    int searchKey, searchIndex, i;
    bool valueFound;

    for (i = 0; i < array_size; i++){
        cout << "Input the Number: ";
        cin >> num[i];
    }
    cout <<endl;

    for (i = 0; i < array_size; i++){
        cout << num[i] << endl;
    }
    cout <<endl;

    cout << "Enter the value to be searched: ";
    cin >> searchKey;
    cout <<endl;

    valueFound = false;

    for (i = 0; (i < array_size) && !valueFound; i++){
        if (searchKey == num[i]){
            searchIndex = i;
            valueFound = true;
        }
    }

    if (valueFound){
        cout << "Value found at index: " << searchIndex <<endl<<endl;
    }else{
        cout << "Value not found";
    }

    return 0;
}
