#include "topologicalSort.h"
#include <stdio.h>
#include <stdlib.h>

Vertex* vHead = NULL;
Edge* eHead = NULL;
int vCount;
int eCount;
int in[6];

void makeVertices() {
    Vertex* p = (Vertex*)malloc(sizeof(Vertex));
    p->num = ++vCount;
    p->top = NULL;
    p->next = NULL;
    p->isFresh = 0;
    Vertex* q = vHead;
    if (q == NULL)
        vHead = p;
    else {
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

void insertIncidentEdge(Vertex* v, int av, Edge* e) {
    IncidentEdge* p = (IncidentEdge*)malloc(sizeof(IncidentEdge));
    p->adjVertex = av;
    p->e = e;
    p->next = NULL;
    IncidentEdge* q = v->top;
    if (q == NULL)
        v->top = p;
    else {
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
}

Vertex* findVertex(int v) {
    Vertex* p = vHead;
    while (p->num != v)
        p = p->next;
    return p;
}

void insertEdges(int v1, int v2) {
    Edge* p = (Edge*)malloc(sizeof(Edge));
    p->vNum1 = v1;
    p->vNum2 = v2;
    p->next = NULL;
    Edge* q = eHead;
    if (q == NULL)
        eHead = p;
    else {
        while (q->next != NULL)
            q = q->next;
        q->next = p;
    }
    Vertex* v = findVertex(v1);
    insertIncidentEdge(v, v2, p);
}

void inDegree() {
    Vertex* p = vHead;
    IncidentEdge* q;
    for (; p != NULL; p = p->next)
        for (q = p->top; q != NULL; q = q->next)
            in[q->adjVertex - 1]++;
}

void topologicalSort() {
    Queue q;
    initQueue(&q);
    Vertex* p;
    IncidentEdge* r;
    inDegree();

    for (int i = 0; i < 6; i++)
        if (in[i] == 0)
            enqueue(&q, i + 1);

    while (!isEmpty(&q))
    {
        int w = dequeue(&q);
        printf("[%d] ", w);
        p = findVertex(w);
        r = p->top;
        while (r != NULL)
        {
            in[r->adjVertex - 1]--;
            if (in[r->adjVertex - 1] == 0)
                enqueue(&q, r->adjVertex);
            r = r->next;
        }
    }
}

void print() {
    Vertex* p = vHead;
}
