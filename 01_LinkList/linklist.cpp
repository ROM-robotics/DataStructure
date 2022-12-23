#include <iostream>
#include "linklist.hpp"

void _echo(Node * node);
void _push(Node** head, int new_data);
void _append(Node** head, int new_data);
void _insertAfter(Node* previousNode, int new_data);
bool _search(Node* head, int data);
void _delete(Node** head, int data);

int main()
{
    Node *head = NULL, *second = NULL, *third = NULL;
    
    head = new Node(); second = new Node(); third = new Node();

    head->data = 1; head->next = second;
    second->data = 2; second->next = third;
    third->data = 3; third->next = NULL;

    _echo(head);
    _push(&head, 99);
    _echo(head);
    _append(&head, 189);
    _echo(head);

    _insertAfter(second, 88);
    _echo(head);

    bool search_status = _search(head, 99);
    std::string str = search_status ? "Data found " : "Data not found ";
    std::cout << str << std::endl;

    _delete(&head, 188);
    _echo(head);;

    return 0;
}

void _echo(Node* node)
{
    while(node != NULL)
    {
        std::cout << node->data << " ";
        node = node->next;
    }   std::cout << std::endl;
}

void _push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void _append(Node** head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    Node *last = (*head_ref);

    if( last == NULL ) { last = new_node; return; }

    while( last->next != NULL )
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void _insertAfter(Node* previousNode, int new_data)
{
    if( previousNode == NULL ) { std::cout << "Error: Last Node" << std::endl; return; }

    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = previousNode->next;

    previousNode->next = new_node;
}

bool _search(Node* head, int data)
{
    Node* currentNode = head;
    while( currentNode != NULL )
    {
        if( currentNode->data == data ) { return true; }
        currentNode = currentNode->next;
    }
    return false;
}

void _delete(Node** head, int key)
{
    Node *previous = NULL; 

    Node *tmp = *head;

    if( tmp != NULL && tmp->data == key ) 
    {
        *head = tmp->next;
        delete tmp;
        return;
    }
    else 
    {
        while( tmp != NULL &&  tmp->data != key )
        {
            // go to next;
            previous = tmp;
            tmp = tmp->next;
        }
        if ( tmp == NULL ) { std::cout<< "Error Deleting : not found " << key << std::endl; return; }

        previous->next = tmp->next;
        delete tmp;
    }
}