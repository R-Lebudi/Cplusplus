#include <iostream>

using namespace std;

// Classes are defined outside the functions

class NComplex{
private :
    int nReal;
    int nImg;

public :

    void display();

};

// Defining a function outside a class

void NComplex::display()
    {
    cout << nReal << "+" << nImg << "i";
    }

// Creating an object of the class

 int main()
{

    NComplex san;

    san.display();

    return 0;


   // the output of this program will have random numbers
   // random numbers because INTs are not defined
   // then by default constructor, the program gets random INTs
}
