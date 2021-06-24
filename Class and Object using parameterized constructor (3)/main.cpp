#include <iostream>

using namespace std;

// Classes are defined outside the functions

class NComplex{
private :
    int nReal;
    int nImg;

public :

    // this is called parameterized constructor
    // which is not declaring INT but declaring them in an object

    NComplex (int r, int i)
    {
        nReal = r;
        nImg = i;
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

    NComplex sui(20,18);

    sui.display();

    return 0;

}
