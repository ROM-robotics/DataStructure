#include <iostream>
#include "stack.hpp"
#define STACK_SIZE 10
#define ROGUE_VALUE -99

typedef struct
{
    int top;
    int st[STACK_SIZE];
} StackType, *Stack;

Stack initStack()
{
    Stack sp = (Stack) malloc( sizeof(StackType) );
    sp->top = -1;
    return sp;
}

int isEmpty(Stack s)
{
    return (s->top==-1);
}

void push(Stack s, int n)
{
    if( s->top > STACK_SIZE -1 )
    {
        printf("\n Stack Overflow ! \n");
        exit(1);
    }
    ++( s->top );
    s->st[s->top] = n;
}

int pop(Stack s)
{
    if( isEmpty(s) )
    {
        return ROGUE_VALUE;
    }
    int hold = s->st[s->top];
    s->st[s->top] = NULL;
    --( s->top );
    return hold;
}

int main()
{
    /* just fuction prototpye */
    //Stack initStack();
    //int empty(Stack);

    //void push(Stack, int);
    //void pop(Stack);

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