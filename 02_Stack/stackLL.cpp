#include <iostream>
//#include "stack.hpp"
#define ROGUE_VALUE -99

typedef struct node
{
    int num;
    struct node *next;
}Node, *NodePtr;

typedef struct stackType
{
    NodePtr top;
}StackType, *Stack;

Stack initStack()
{
    Stack sp = (Stack) malloc( sizeof(StackType) );
    sp->top = NULL;
    return sp;
}

int isEmpty(Stack s)
{
    return (s->top==NULL);
}

void push(Stack s, int n)
{
    NodePtr np = (NodePtr) malloc( sizeof(Node) );
    np->num = n;
    np->next = s->top;
    s->top = np;
}

int pop(Stack s)
{
    if( isEmpty(s) )
    {
        return ROGUE_VALUE;
    }
    int hold = s->top->num;
    NodePtr tmp = s->top;
    s->top = s->top->next;
    free(tmp);
    return 0;
}

int main()
{
    Stack s = initStack();
    int n = 0;
    printf("Press 0 to exit or Push some integer to Stack ");
    scanf("%d", &n);
    while( n != 0 )
    {
        push(s,n);
        scanf("%d", &n);
    }
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    return 0;
}