#include <iostream>
#include <cstdlib>

using namespace std;

class List { // class name
private:
    struct node {
        int data; // store node data-type
        node* next; // to point to another node in the list
    };

    // variables of a node
    node* head;
    node* curr;
    node* temp;

    public: // This where the functions go
        // name of the class
        List(); // setting the variables once the list is created

        // add a node & place a value inside it
        void AddNode (int addData);

        // loops the list to find matching delData to be deleted(node)
        void DeleteNode (int delData);

        // prints available list of the node
        void PrintList();
};

// defining the functions
List::List() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void List::AddNode (int addData) {
    node* n = new node; // making the pointer to point to the new node
    n->next = NULL; // find the next element & make it point to nothing
    n->data = addData; // the new node will hold the added data

    if (head != NULL) { // a list a created & if this is true DO THE FOLLOWING
        curr = head; // current pointer points to the front of the list

        while (curr->next != NULL) { // validate if we are at the last node & IF WE ARE NOT THEN DO THE FOLLOWING
            curr = curr->next; // the current pointer points to the next node in the list
        }
        curr->next = n; // this is the last node. NEW NODE BECOMES THE CURRENT NODE
    }
    else { if //if there is no list THEN n becomes the new node
        (head = n);
    }
        cout << "The value " << addData << " was added \n";
}

void List::DeleteNode (int delData) {
    node* delPtr = NULL; // the delete pointer to point to nothing
    temp = head;
    curr = head;

    while (curr !=NULL && curr->data != delData) {
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL) {
        cout << delData << " was not in the list \n";
        delete delPtr;
    }
    else { //the node we are looking for has been found
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;

        if (delPtr == head) { // deleting the 1st node in the list
            head = head->next;
            temp = NULL;
        }

        delete delPtr;
        cout << "The value " << delData << " was deleted \n";
    }
}

void List::PrintList() {
    curr = head;

    while (curr != NULL) {
        cout << curr->data <<endl;
        curr = curr->next;
    }
}

int main()
{
    List Dyza;

    Dyza.AddNode(3);
    Dyza.AddNode(5);
    Dyza.AddNode(7);
    Dyza.PrintList();

    // deleting a value from the list
    Dyza.DeleteNode(3);
    Dyza.PrintList();

    Dyza.AddNode(2);
    Dyza.AddNode(4);
    Dyza.AddNode(1);
    Dyza.PrintList();


    return 0;
}
