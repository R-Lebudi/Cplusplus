#include <iostream>
using namespace std;

int fibonacci (int a, int b ,int n){
    if (n == 1)
    return a;

    else if (n == 2)
        return b;

    else
        return fibonacci(a,b,n-1) + fibonacci (a,b,n-2);
}

int main(){
    int num1, num2, n;

    cout << "Enter num1 ";
    cin >> num1;

    cout << "Enter num2 ";
    cin >> num2;

    cout << "Enter position ";
    cin >> n;

    cout << "The fibonacci of " << num1 << " and " << num2 << " is " << fibonacci (num1,num2,n);

return 0;
}
