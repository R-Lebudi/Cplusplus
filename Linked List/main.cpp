#include <iostream>

using namespace std;

struct node   // Refers to all elements in the linked list
{
    int number;
    node *next; // pointer to the linked list
};

// function declarations
bool isEmpty(node *head);
char menu();
void insertAsFirstElement(node *&head, node *&last, int number);
void insert(node *&head, node *&last, int number);
void remove(node *&head, node *&last);
void showList(node *current);
void bsortlist(node *head);

bool isEmpty(node *head)
{
    if (head == NULL)
        return true;
    else
        return false;
}

char menu()
{
    char choice;

    cout << "Menu \n";
    cout << "1. Add an Item. \n";
    cout << "2. Remove an Item. \n";
    cout << "3. Show the list. \n";
    cout << "4. Sort list. \n";
    cout << "5. Exit \n";

    cin >> choice;

    return choice;
}

void insertAsFirstElement(node *&head, node *&last, int number)
{
    node *temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    last = temp;
}

void insert(node *&head, node *&last, int number)
{
    if (isEmpty(head))
        insertAsFirstElement(head, last, number);
    else {
        node *temp = new node;
        temp->number = number;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void remove(node *&head, node *&last)
{
    if (isEmpty(head))
        cout << "The list is already empty. \n";
    else if (head == last){
        delete head;
        head == NULL;
        last == NULL;
    }
    else {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

void showList(node *current)
{
    if (isEmpty(current))
        cout << "The list is empty. \n";
    else {
        cout << "The list contains: \n";

// looping through the memory location
        while (current != NULL){
            cout << current->number << endl;
            current = current->next;
        }
    }
}

void bsortlist(node *head){
    node *i, *j;
    int temp;

    for (i=head; i->next!= NULL; i=i->next){
        for (j=i->next; j!=NULL; j=j->next){
            if (i->number > j->number){
                temp=i->number;
                i-> number=j->number;
                j->number=temp;
            }
        }
    }
}

int main()
{

    node *head = NULL;
    node *last = NULL;
    char choice;
    int number;

    do {

        choice = menu();

        switch(choice){
            case '1': cout << "Please enter a number: ";
            cin >> number;
            insert(head, last, number);
            break;

            case '2': remove(head, last);
                      break;

            case '3': showList(head);
                      break;

            case '4': bsortlist(head);
                      break;

            default:
                cout << "System exit\n";

        }
    }

    while (choice != '5');

    return 0;
}
