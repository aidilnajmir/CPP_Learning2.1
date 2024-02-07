// File: orderedLinkedList.cpp

// Name: Mohamad Aidil Najmir Bin Mohamad Sobri

// Date of  First Version of this Program: 03/15/2022

// Date of Working Version of this Program: 03/15/2022



#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

class orderedLinkedList 
{
    Node* head;

public:
    orderedLinkedList(Node* h) 
    {
        head = h;
    }

    void insert(int new_data)
    {
        Node* head_ref = head;

        // Traverse till correct position
        while (head_ref != NULL && (head_ref->next != NULL) && (head_ref->next)->data < new_data)
        {
            head_ref = head_ref->next;
        }

        // Check for duplicacy
        if (head_ref != NULL && (head_ref->next != NULL) && (head_ref->next)->data == new_data)
        {
            cout << "ERROR: Duplicate value insertion is not allowed\n\n";
            return;
        }

        // Insert new node
        Node* new_node = new Node();
        new_node->data = new_data;
        if (head_ref != NULL) 
        {
            new_node->next = head_ref->next;
            head_ref->next = new_node;
        }
        else 
        {
            new_node->next = NULL;
            head = new_node;
        }

    }

    void print()
    {
        Node* node = head;
        cout << "Ordered List: ";
        while (node != NULL)
        {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl << endl;
    }

};


// main function
int main()
{
    Node* head = NULL;
    orderedLinkedList list = orderedLinkedList(head);

    list.insert(10);
    list.insert(90);
    list.insert(40);
    list.insert(50);
    list.insert(80);

    list.print();

    list.insert(50); // Should throw an error due to duplication
    
    list.print();

    return 0;
}