#include <iostream>

using namespace std;

int denom, num;
int god(int a, int b)
{
    return b == 0 ? a : god (b, a % b);
}

int reduce(int a, int b)
{
    if(a == 0 || b == 0)
        return 0;
    else
        {
            denom = a/god(a,b);
            num = b/god(a,b);
            return 1;
        }
}

int main()
{
    cout << "Please Enter DENOMINATOR :";
    cin >> denom;

    cout << "Please Enter NUMERATOR :";
    cin >> num;

    if (reduce(denom, num)==1)
        cout << denom << "/" << num << endl;
    else
        cout << "FRACTION ERROR" << endl;

    return 0;
}
