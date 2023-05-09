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

void insertAtHead(Node *&head, Node *&tail, int data)
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
        newNode->next = head;
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
        tail = newNode;
        return;
    }
}

int findLen(Node *&head)
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

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step 1 : Find the posn prev & curr
        int len = findLen(head);

        if (position == 0)
        {
            insertAtHead(head, tail, data);
            return;
        }

        if (position >= len)
        {
            insertAtTail(head, tail, data);
            return;
        }

        int i = 1;
        Node *prev = head;
        while (i < position)
        {
            prev = prev->next;
            i++;
        }
        Node *curr = prev->next;

        // step 2:
        Node *newNode = new Node(data);

        // step 3:
        newNode->next = curr;

        // step 4:
        prev->next = newNode;
    }
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
    insertAtHead(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    printLL(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;
    cout << endl;

    insertAtPosition(head, tail, 0, 1);
    insertAtPosition(head, tail, 5, 100);

    printLL(head);
    cout << endl;
    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    return 0;
}