#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   string n, s, a, b, q, w;
    int i, c, r;

    cin >> n;
    cin >> s;
    cin >> i;

    cout << "\n";

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "\n";

    cin >> q;
    cin >> w;
    cin >> r;

     cout << setw(8) << "Name" << setw(20) << "Surname" << setw(32) << "Icas Number" << endl
          << setw(8) << n << setw(20) << s << setw(32) << i << endl
          << setw(8) << a << setw(20) << b << setw(32) << c << endl
          << setw(8) << q << setw(20) << w << setw(32) << r << endl;


    return 0;
}
/*

// Example number2

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 9, c = 10, r = 7;

        cout << setw(8) << "Name" << setw(20) << "Surname" << setw(32) << "Icas Number" << endl
          << setw(8) << "Lucas" << setw(20) << "Lebudi" << setw(32) << i << endl
          << setw(8) << "Wayne" << setw(20) << "Rooney" << setw(32) << c << endl
          << setw(8) << "Cristiano" << setw(20) << "Ronaldo" << setw(32) << r << endl;


    return 0;
}

*/
