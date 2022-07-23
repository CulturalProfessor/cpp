#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *Insert(int x,Node *head)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}
void Print(Node *head)
{
    Node *temp = head;
    cout << "list is: ";
    while (temp->next != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    cout << "\n";
}
int main()
{
    Node *head= NULL;
    cout << "how many numbers\n";
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the number\n";
        cin >> x;
        head=Insert(x,head);
        Print(head);
    }
}