#include <iostream>

using namespace std;

int sumofdigits(int x){
    if (x < 10) return x;
    return sumofdigits(x /10) + x %10;
}

int main()
{
    int x;

    cout << "Enter a number: " << endl;
    cin >> x;
    cout << sumofdigits(x);

    return 0;
}
