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

    // Destructor to delete node
    ~Node()
    {
        cout << this->data << " deleted" << endl;
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
        return;
    }

    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

int findLen(Node *head)
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

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "LL IS EMPTY!" << endl;
        return;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    int len = findLen(head); //
    if (position == len)     // last node of LL
    {
        // step 1 : find prev
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        // step 2 : prev->next ko NULL krdo
        prev->next = NULL;

        // step 3 : Update the tail
        Node *temp = tail;
        tail = prev;

        // step 4: delet temp
        delete temp;
        return;
    }
    else //  delete at Middle in Linked List
    {
        // find prev
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }

        Node *curr = prev->next;
        // step2
        prev->next = curr->next;

        curr->next = NULL;

        delete curr;
    }
}

void printLL(Node *head)
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
    insertAtTail(head, tail, 50);
    insertAtTail(head, tail, 60);
    insertAtTail(head, tail, 70);

    printLL(head);
    cout << endl;
    deleteNode(4, head, tail);
    printLL(head);
    return 0;
}