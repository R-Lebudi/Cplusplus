#include <iostream>

using namespace std;

int main()
{
    int a[10], i, u, val, count, test[10], flag, c = 0;

    cout << "Enter values in Array \n";
    for (i = 0; i <= 9; i++){
        cout << "Enter value in element " << i+1 << " : ";
        cin >> a[i];
    }

    for (u = 0; u <= 9; u++){
        val = a[u];
        count = 0;
        flag = 1;
        for (i = 0; i <= 9; i++){
            if (val == a[i])
                count++;
        }
        for (i = 0; i <= c; i++){
            if (test[i]==val)
                flag = 0;
        }
        if (flag == 1){
            cout << "This value " << val << " is repeated " << count << " times \n";
            test[c]= val;
            c++;
        }
    }

    return 0;
}
