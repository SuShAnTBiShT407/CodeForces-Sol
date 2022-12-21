#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
    Node *head;

public:
    Linkedlist() { head = NULL; }
    Linkedlist(Linkedlist &l)
    {
        Node *t1 = l.head;
        head = NULL;
        if (t1 == NULL)
        {
            cout << "Empty List";
            return;
        }
        // if(head==NULL){
        //     head = l.head;
        // }
        Node *t2 = head;


        while (t1!= NULL)
        {
            Node *newNode = new Node;
            newNode->data = t1->data;
            newNode->next = NULL;
            if (head == NULL)
            {
                head = newNode;
                t2 = head;
            }
            t2->next = newNode;
            t2 = t2->next;
            t1 = t1->next;
        }
    }
    void insertNode(int);
    void printList();

    void compareList(Node *l1, Node *l2);
};

void Linkedlist::insertNode(int data)
{

    Node *newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
    }

    temp->next = newNode;
}

void Linkedlist::printList()
{
    Node *temp = head;

    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }

    while (temp != NULL)
    {
        cout << &(temp->data) << " ";
        temp = temp->next;
    }
}

void Linkedlist::compareList(Node *l1, Node *l2)
{

    if (l1 == NULL and l2 == NULL)
    {
        cout << "both are empty";
    }
    while (l1 != NULL)
    {
        if (l1->data != l2->data)
        {
            cout << "List are not similar ";
            return;
        }
        else
        {
            l1 = l1->next;
            l2 = l2->next;
        }
    }
}

int main()
{
    Linkedlist list, list2;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter the " << i + 1 << "th value in list : ";
        cin >> val;
        list.insertNode(val);
    }
    Linkedlist listc(list);

    cout << "Elements of the Original list are: ";
    list.printList();
    cout << endl;

    cout << "Elements of the Copied list are: ";
    listc.printList();
    cout << endl;

    // cout << "\nEnter the second list\n";
    // for (int i = 0; i < n; i++)
    // {
    //     int val;
    //     cout << "Enter the " << i + 1 << "th value in list : ";
    //     cin >> val;
    //     list2.insertNode(val);
    // }
    // compare the linklist
    // list.compareList();

    return 0;
}
