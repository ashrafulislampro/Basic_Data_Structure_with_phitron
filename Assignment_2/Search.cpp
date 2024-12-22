#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *Next;
    Node(int n)
    {
        this->val = n;
        this->Next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->Next = newnode;
    tail = newnode;
}

int search(Node *head, int item)
{
    Node *tmp = head;
    int index = 0;
    for (Node *i = tmp; i != NULL; i = i->Next)
    {
        if (tmp->val == item)
        {
            return index;
        }
        index++;
        tmp = tmp->Next;
    }
    return -1;
};
int main()
{

    int q, val, item;
    cin >> q;
    while (q--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }
        cin >> item;
        cout << search(head, item) << endl;
    }

    return 0;
}