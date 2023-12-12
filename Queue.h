#ifndef QUEUE_H
#define QUEUE_H

#define N 10

typedef struct {
    int element[N];
    int front, rear;
} Queue;

void initQueue(Queue* Q);
int isEmpty(Queue* Q);
int isFull(Queue* Q);
void enqueue(Queue* Q, char elem);
int dequeue(Queue* Q);

#endif // QUEUE_H
