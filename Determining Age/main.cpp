#include <iostream>

using namespace std;

int main()
{
    int YOB;
    int Age;
    int Year;

    cout << "What year is this? ";
    cin >> Year;

    cout << "What is your Year of Birth? ";
    cin >> YOB;

    Age=Year-YOB;
    if(Age >=18) {
        cout << "You are an Adult" <<endl;
    }
    else
    {
        cout << "You are a Minor" <<endl;
    }

    return 0;
}
