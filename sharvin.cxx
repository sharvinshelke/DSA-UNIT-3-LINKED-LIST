#include <iostream>
#include <string>
using namespace std;

struct Node {
    int rollNo;
    string name;
    float marks;
    Node *next;
};

int main() {
    Node *head = NULL, *temp, *newNode;

    for(int i = 0; i < 3; i++) {
        newNode = new Node;

        cout << "Enter Roll No, Name and Marks: ";
        cin >> newNode->rollNo >> newNode->name >> newNode->marks;

        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newNode;
        }
    }

    cout << "\nStudent Records:\n";
    temp = head;

    while(temp != NULL) {
        cout << "Roll No: " << temp->rollNo
             << " Name: " << temp->name
             << " Marks: " << temp->marks << endl;

        temp = temp->next;
    }

    return 0;
}