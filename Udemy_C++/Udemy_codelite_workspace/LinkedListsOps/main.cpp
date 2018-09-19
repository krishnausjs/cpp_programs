#include <iostream>
using namespace std;

struct Node {
    struct Node *next;
    int data;
};

bool isCircular(struct Node *head)
{
    struct Node *node = head;
    if( node == NULL)
        return false;
    
    struct Node *temp = node->next;
    
    while( temp != NULL &&  node != temp) {
        temp = temp->next;
    }
    return (temp == node);
}

struct Node *newNode(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    struct Node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    isCircular(head) ? cout <<"Yes" << endl : cout << "No " << endl;
    head->next->next->next= head;
    isCircular(head) ? cout <<"Yes" << endl : cout << "No " << endl;    
    getchar();
    return 0;
}