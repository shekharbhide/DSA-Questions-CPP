#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// insert node at the right of head of LInked List
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // what if LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1 : create a new node
    Node *newNode = new Node(data);

    // step 2 : attach newNode ka next to head
    newNode->next = head;

    // head always indicate starting node,
    // make newNode as headnode
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // if LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step 1 :create a new Node
    Node *newNode = new Node(data);

    // step2 : connect tail with newNode
    tail->next = newNode;

    // step3 : update the tail node
    tail = newNode;
}
void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 50);

    insertAtTail(head, tail, 70);

    printLL(head);
    return 0;
}