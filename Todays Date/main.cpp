#include <iostream>

using namespace std;

int main()
{

   int year;
   string month;
   int date;

   cout << "Enter Date: " <<endl;
   cin >> date;
   cout << date << " is today's date." <<endl;

   cout <<endl;
   cout << "Enter Month: " <<endl;
   cin >> month;
   cout << month << " is today's month." <<endl;

   cout <<endl;
   cout << "Enter Year: " <<endl;
   cin >> year;
   cout << year << " is today's year." <<endl;

   cout <<endl;
   cout << date << " " << month << " " << year <<endl;

   return 0;
}
