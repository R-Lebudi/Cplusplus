#include <iostream>

using namespace std;

int fact (int);

int main()
{
    int q;
    cout << "enter integer" << endl;
    cin >> q;

    cout << "the recursion is: " << fact(q) << endl;

    return 0;
}

int fact(int n) {

    if (n == 1)
        return 1;
    else
        return n * fact(n-1);
}
