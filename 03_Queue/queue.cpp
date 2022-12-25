#include "stdio.h"
#include "stdlib.h"
#define MAXQ 10

typedef struct {
    int head, tail;
    int QA[MAXQ];
}Qtype, *Queue;

int a, *b;

Queue initQueue() {
    Queue qp = (Queue) malloc( sizeof(Qtype) );
    qp->head = qp->tail = 0;
    return qp;
}

void enqueue( Queue q, int n) {
    if( q->tail == MAXQ-1 ) {
        q->tail = 0;
    } else {
        ++(q->tail);
    }
    if(q->tail == q->head) {
        printf("\n Queue is full.\n");
        exit(1);
    }
    q->QA[q->tail] = n;
}

bool isEmpty(Queue q)
{
    return ( q->head == q->tail );
}

int dequeue(Queue q) {
    if( isEmpty(q) ) {
        printf("\n Queue is empty ");
    }
    if( q->head == MAXQ-1 ) {
        q->head = 0;
    } else {
        ++(q->head);
    }
    return q->QA[q->head];
}

int main() {
    int n = 0;
    Queue Q = initQueue();
    printf("\nEnter positive integer \n");
    scanf("%d", &n);

    while(n > 0) {
        enqueue( Q, n);
        n = n/10;
    }

    printf("\n Reverse Order : ");
    while( !isEmpty(Q)) {
        printf("%d\n", dequeue(Q));
    }

    return 0;
}