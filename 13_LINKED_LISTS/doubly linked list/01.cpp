#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(){
         this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
       
    

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL) // LL is empty
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is Non-Empty
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;

        tail = newNode;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = NULL;

    print(first);
    cout << endl;
    Node *head = first;
    Node *tail = third;
    insertAtHead(head, tail, 100);
    print(head);

    cout << endl;
    insertAtTail(head, tail, 200);
    print(head);
    return 0;
}

