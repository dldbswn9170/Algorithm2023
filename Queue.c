#include "Queue.h"
#include <stdio.h>

void initQueue(Queue* Q) {
    Q->front = 0;
    Q->rear = 0;
}

int isEmpty(Queue* Q) {
    return Q->rear == Q->front;
}

int isFull(Queue* Q) {
    return (Q->rear + 1) % N == Q->front;
}

void enqueue(Queue* Q, char elem) {
    if (isFull(Q)) {
        printf("FULL\n");
        return;
    }
    Q->rear = (Q->rear + 1) % N;
    Q->element[Q->rear] = elem;
}

int dequeue(Queue* Q) {
    if (isEmpty(Q)) {
        printf("EMPTY\n");
        return -1;
    }
    Q->front = (Q->front + 1) % N;
    return Q->element[Q->front];
}
