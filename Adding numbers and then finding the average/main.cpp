#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5;

    cout << "Enter five integers, seperated by space: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    int sum = n1 + n2 + n3 + n4 + n5;

    float average = sum / 5.0f;

    cout << "Sum of the numbers is: " << sum <<endl;
    cout << "Average of the value is: " << average <<endl;

    return 0;
}
