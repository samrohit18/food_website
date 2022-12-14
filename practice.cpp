#include <bits/stdc++.h>
using namespace std;
 
class Node {
public:
    int data;
    Node* next;
};
 
void deleteList(Node** head_ref)
{
 
    Node* current = *head_ref;
    Node* next = NULL;
 
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
}
 
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
 
    new_node->data = new_data;
 
    new_node->next = (*head_ref);
 
    (*head_ref) = new_node;
}

void printList(Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}
// void display(Node* head)
// {
//     Node* ptr=head;
//     while(ptr!=NULL)
//     {
//         cout<<ptr->data<<" ";
//         ptr=ptr->next;
//     }
// }
 
int main()
{
    Node* head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
    //display(head);
    printList(head);
    cout << "Deleting linked list";
    deleteList(&head);
 
    cout << "\nLinked list deleted";
}
 