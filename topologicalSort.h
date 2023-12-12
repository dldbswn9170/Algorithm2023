#ifndef TOPOLOGICAL_SORT_H
#define TOPOLOGICAL_SORT_H

#include "Queue.h"

typedef struct Edge {
    int vNum1;
    int vNum2;
    struct Edge* next;
} Edge;

typedef struct IncidentEdge {
    int adjVertex;
    Edge* e;
    struct IncidentEdge* next;
} IncidentEdge;

typedef struct Vertex {
    int num;
    int isFresh;
    struct Vertex* next;
    IncidentEdge* top;
} Vertex;

extern Vertex* vHead;
extern Edge* eHead;
extern int vCount;
extern int eCount;
extern int in[6];

void makeVertices();
void insertIncidentEdge(Vertex* v, int av, Edge* e);
Vertex* findVertex(int v);
void insertEdges(int v1, int v2);
void inDegree();
void topologicalSort();
void print();

#endif // TOPOLOGICAL_SORT_H
