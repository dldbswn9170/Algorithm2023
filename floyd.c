#include "floyd.h"
#include <stdio.h>

int A[MAX_VERTICES][MAX_VERTICES];

void printA(GraphType_f *g)
{
   int i, j;
   printf("===============================\n");
   for (i = 0; i < g->n; i++)
   {
      for (j = 0; j < g->n; j++)
      {
         if (A[i][j] == INF)
            printf("  * ");
         else
            printf("%3d ", A[i][j]);
      }
      printf("\n");
   }
   printf("===============================\n");
}

void initializeGraph2(GraphType_f *g)
{
   printf("정점의 개수를 입력하세요 (최대 %d): ", MAX_VERTICES);
   scanf("%d", &(g->n));

   printf("인접 행렬을 입력하세요 (연결이 없는 경우에는 INF 사용):\n");
   for (int i = 0; i < g->n; i++)
   {
      for (int j = 0; j < g->n; j++)
      {
         scanf("%d", &(g->weight[i][j]));
      }
   }
}

void floyd(GraphType_f *g)
{
   int i, j, k;
   for (i = 0; i < g->n; i++)
      for (j = 0; j < g->n; j++)
         A[i][j] = g->weight[i][j];
   printA(g);

   for (k = 0; k < g->n; k++)
   {
      for (i = 0; i < g->n; i++)
         for (j = 0; j < g->n; j++)
            if (A[i][k] + A[k][j] < A[i][j])
               A[i][j] = A[i][k] + A[k][j];
      printA(g);
   }
}
