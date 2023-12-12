#include "dijkstra.h"
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

int distance[MAX_VERTICES];
int found[MAX_VERTICES];

int choose(int distance[], int n, int found[])
{
    int i, min, minpos;
    min = INT_MAX;
    minpos = -1;
    for (i = 0; i < n; i++)
        if (distance[i] < min && !found[i])
        {
            min = distance[i];
            minpos = i;
        }
    return minpos;
}

void print_status(GraphType *g)
{
    static int step = 1;
    printf("단계 %d: ", step++);
    printf("거리: ");
    for (int i = 0; i < g->n; i++)
    {
        if (distance[i] == INF)
            printf(" * ");
        else
            printf("%2d ", distance[i]);
    }
    printf("\n");
    printf("        방문 여부:    ");
    for (int i = 0; i < g->n; i++)
        printf("%2d ", found[i]);
    printf("\n\n");
}

void shortest_path(GraphType *g, int start)
{
    int i, u, w;
    for (i = 0; i < g->n; i++)
    {
        distance[i] = g->weight[start][i];
        found[i] = false;
    }
    found[start] = true;
    distance[start] = 0;
    for (i = 0; i < g->n - 1; i++)
    {
        print_status(g);
        u = choose(distance, g->n, found);
        found[u] = true;
        for (w = 0; w < g->n; w++)
            if (!found[w])
                if (distance[u] + g->weight[u][w] < distance[w])
                    distance[w] = distance[u] + g->weight[u][w];
    }
}
