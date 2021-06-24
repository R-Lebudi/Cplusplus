#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double rainfall[7];
    double total = 0;
    double avg = 0;
    double maxRain = 0;
    double minRain = 0;
    double tempRain = 0;

    // values assigned in an array
    for (int i = 0; i < 7; i++){
        cout << "Please enter rainfall for One week: DAY " << i+1 << " : " <<endl;
        cin >> rainfall[i];
        total += rainfall[i];
    }

    // average
    avg = total / 7;

    maxRain = rainfall[0];
    minRain = rainfall[0];

    for (int i = 1; i <= 7; i++){
        tempRain = rainfall[i];
        if (tempRain < minRain)
            minRain = tempRain;

        if (tempRain > maxRain)
            maxRain = tempRain;
    }

    cout << "Total rainfall was: " << setprecision(2) << fixed << showpoint << total <<endl;
    cout << "Average rainfall was: " << setprecision(2) << fixed << showpoint << avg <<endl;
    cout << "Highest rainfall was: " << setprecision(2) << fixed << showpoint << maxRain <<endl;
    cout << "Lowest rainfall was: " << setprecision(2) << fixed << showpoint << minRain <<endl;

    return 0;
}
