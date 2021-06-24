#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Please Enter Grade mark" <<endl;
    cin >> score;

    switch(score)
    {
        case 0 ... 50 : cout << "Failed";
        break;
        case 51 ... 70 : cout << "Passed";
        break;
        case 71 ... 100 : cout << "Excellent";
        break;
        default:
            cout << "Invalid value";

    }
    return 0;
}


