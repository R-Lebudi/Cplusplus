#include <iostream>

using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter number of rows of first matrix: \n";
    cin >> r1;
    cout << "\n";

    cout << "Enter number of column of first matrix: \n";
    cin >> c1;
    cout << "\n";

    cout << "Enter number of rows of second matrix: \n";
    cin >> r2;
    cout << "\n";

    cout << "Enter number of column of second matrix: \n";
    cin >> c2;
    cout << "\n";

    if (r1 == r2 && c1 == c2) {
        int m1[r1][c1];
        int m2[r2][c2];
        int R[r2][c2];

        int i, j;

        cout << "Enter first matrix: \n";
        cout << "\n";

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                cin >> m1[i][j];
            }
        }
        cout << "\n";

        cout << "Enter second matrix: \n";
        cout << "\n";

        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                cin >> m2[i][j];
            }
        }


        // Addition
        cout << "\n";

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                R[i][j] = m1[i][j] + m2[i][j];
            }
        }
        cout << "\n";

        // display result

        cout << "Results of Matrix: \n";
        cout << "\n";

        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                cout << " " << R[i][j] << " ";
            }
        cout << "\n";
        }

    }else {
        cout << "Addition is not possible.";
    }

    return 0;
}
