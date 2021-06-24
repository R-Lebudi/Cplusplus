#include <iostream>

using namespace std;

// Classes are defined outside the functions

class NComplex{
private :
    int nReal;
    int nImg;

public :

    NComplex()
    {
        nReal = 12;
        nImg = 11;
    }


// Defining a function outside a class

void display()
    {
    cout << nReal << "+" << nImg << "i";
    }
};

// Creating an object of the class

 int main()
{

    NComplex san;

    san.display();

    return 0;

}
