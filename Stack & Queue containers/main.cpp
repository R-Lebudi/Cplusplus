#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(void)
{
    // LIFO - LAST IN FIRST OUT
    stack<int>dishes;
    dishes.push(1);
    dishes.push(2);
    dishes.push(3);

    while (!dishes.empty()){
        cout << dishes.top() << endl;
        dishes.pop();
    }

    cout << "\n";

    // FIRST IN FIRST OUT
    queue<int>ticket_counter;

    ticket_counter.push(1);
    ticket_counter.push(2);
    ticket_counter.push(3);

    while (!ticket_counter.empty()){
        cout << ticket_counter.front() << endl;
        ticket_counter.pop();
    }

    return 0;
}
