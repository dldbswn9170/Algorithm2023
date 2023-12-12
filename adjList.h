#ifndef ADJLIST_H
#define ADJLIST_H

#pragma once
#define MAX_VERTEX 30
#define FALSE 0
#define TRUE 1

typedef struct graphNode {
	int vertex;
	struct graphNode* link;
} graphNode;

typedef struct graphType2 {
	int n;
	graphNode* adjList_H[MAX_VERTEX];
	int visited[MAX_VERTEX];
} graphType2;

void createGraph2(graphType2* g);
void insertVertex2(graphType2* g, int v);
void insertEdge2(graphType2* g, int u, int v);
void print_adjList(graphType2* g);

#endif
