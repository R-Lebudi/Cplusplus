#include <iostream>

using namespace std;

// Classes are defined outside the functions

class HumanBeing{
public :
    void display(){
    cout << "Hello I am a human being";
    }

};


int main()
{
    // To declare an object YOU have to declare the class name

    HumanBeing anil;

    anil.display();

    return 0;
}
