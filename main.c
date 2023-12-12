#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>
#include <memory.h>

#include "selectSort.h"
#include "bubbleSort.h"
#include "quickSort.h"
#include "insertionSort.h"
//#include "mergeSort.h"
#include "treeSort.h"
#include "prim.h"
#include "kruskal.h"
#include "adjMatrix.h"
#include "adjList.h"
#include "DFS.h"
#include "BFS.h"
#include "dijkstra.h"
#include "floyd.h"
#include "HashTable.h"
#include "topologicalSort.h"
#include "permutation.h"

int main() {
    char ch;
    
    int choice;
    int n;
    
    printf("          정렬 알고리즘\n------------------------------\n1. 선택 정렬\n2. 버블 정렬\n3. 퀵 정렬\n4. 삽입 정렬\n5. 병합 정렬\n6. 트리 정렬\n7. 프림\n8. 크루스칼\n9. 그래프의 인접 행렬\n10. 그래프의 인접 리스트\n11. 그래프의 깊이 우선 탐색 DFS\n12. 그래프의 너비 우선 탐색 BFS\n13. 다익스트라 최단 경로\n14. 플로이드 최단 경로\n15. 해시 테이블\n16. 위상 정렬\n17. 백 트래킹\n프로그램 종료는 e\n------------------------------\n번호를 입력하세요 : ");
    scanf("%d", &choice);
    
    if(choice==1){
        printf("\n선택 정렬(Selection Sort)\n");
        printf("배열의 크기를 입력하세요: ");
        scanf("%d", &n);
        int arr[n];
        
        printf("배열의 요소를 입력하세요: ");
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        SelectionSort(arr, n);
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==2){
        printf("\n버블 정렬(Bubble Sort)\n");
        printf("배열의 크기를 입력하세요: ");
        scanf("%d", &n);
        int arr[n];
        
        printf("배열의 요소를 입력하세요: ");
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        bubbleSort(arr, n);
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==3){
        printf("\n퀵 정렬(Quick Sort)\n");
        printf("배열의 크기를 입력하세요: ");
        scanf("%d", &n);
        int arr[n];
        
        printf("배열의 요소를 입력하세요: ");
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        quickSort(arr, 0, n-1, n);
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
        
    }
    else if(choice==4){
        printf("\n삽입 정렬(Insertion Sort)\n");
        printf("배열의 크기를 입력하세요: ");
        scanf("%d", &n);
        int arr[n];
        
        printf("배열의 요소를 입력하세요: ");
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        insertionSort(arr, n);
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    
    else if(choice==5){
        /*
        printf("\n병합 정렬 (Merge Sort)\n");
        printf("배열의 크기를 입력하세요: ");
        scanf("%d", &n);
        int arr[n];
        
        printf("배열의 요소를 입력하세요: ");
        int i;
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        mergeSort(arr, 0, n-1);
         */
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
        
    }
    
    else if(choice==6){
        printf("\n트리 정렬 (Tree Sort)\n");
        
        int i, size;
        printf("원소의 개수를 입력하세요: ");
        scanf("%d", &size);
        
        int* list = (int*)malloc(size * sizeof(int));
        
        printf("%d개의 원소를 입력하세요: ", size);
        for (i = 0; i < size; i++)
            scanf("%d", &list[i]);
        
        printf("\n정렬 전 원소: ");
        for (i = 0; i < size; i++)
            printf("%3d", list[i]);
        
        printf("\n트리 정렬 수행 결과: ");
        
        treeSort(list, size);
        
        free(list);
    }
    else if(choice==7){
        int n, m;
        scanf("%d %d", &n, &m);

        // 그래프 초기화
        for (int i = 0; i < m; i++) {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a][outDegree[a]].prim_v = b;
            adj[a][outDegree[a]].prim_w = c;
            adj[b][outDegree[b]].prim_v = a;
            adj[b][outDegree[b]].prim_w = c;
            outDegree[a]++;
            outDegree[b]++;
        }

        chk[1] = 1;
        for (int i = 0; i < outDegree[1]; i++) {
            prim_push(adj[1][i].prim_v, adj[1][i].prim_w);
        }
        prim_sort();

        int cnt = 0;
        printf(" 1");
        while (cnt < n - 1) {
            prim_graph cur = pq[pqNum - 1];
            prim_pop();
            if (chk[cur.prim_v]) continue;
            printf(" %d", cur.prim_v);
            chk[cur.prim_v] = 1;
            ans += cur.prim_w;
            cnt++;

            for (int i = 0; i < outDegree[cur.prim_v]; i++) {
                if (!chk[adj[cur.prim_v][i].prim_v])
                    prim_push(adj[cur.prim_v][i].prim_v, adj[cur.prim_v][i].prim_w);
            }
            prim_sort();
        }
        printf("\n%d", ans);
    }
    else if(choice==8){
        printf("정점의 개수와 간선의 개수를 입력하세요: ");
        scanf("%d %d", &n, &m);

        printf("간선을 입력하세요 (v1 v2 weight):\n");
        for (int i = 0; i < m; i++) {
            scanf("%d %d %d", &k_adj[i].v1, &k_adj[i].v2, &k_adj[i].w);
        }

        sort();

        for (int i = 1; i <= n; i++)
            p[i] = -1;

        int cnt = 0;

        printf("최소 신장 트리의 간선들:\n");
        for (int i = 0; i < m; i++) {
            graph cur = k_adj[i];
            if (!isDiff(cur.v1, cur.v2)) continue;
            printf("%d - %d : %d\n", cur.v1, cur.v2, cur.w);
            kruskal_ans += cur.w;
            cnt++;
            if (cnt == n - 1) break;
        }

        printf("최소 신장 트리의 총 비용: %d\n", kruskal_ans);
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==9){
        int i;
        graphType* G = (graphType*)malloc(sizeof(graphType));

        // 사용자로부터 그래프의 크기 입력
        printf("그래프의 크기를 입력하세요: ");
        scanf("%d", &G->n);

        createGraph(G);

        // 사용자로부터 정점 정보 입력
        for (i = 0; i < G->n; i++)
            insertVertex(G, i);

        // 사용자로부터 간선 정보 입력
        int u, v;
        while (1) {
            printf("간선 정보를 입력하세요 (u v, -1 -1 입력시 종료): ");
            scanf("%d %d", &u, &v);
            if (u == -1 || v == -1)
                break;
            insertEdge(G, u, v);
        }

        // 인접 행렬 출력
        print_adjMatrix(G);

        free(G);

        getchar();
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    
    else if(choice==10){
        graphType myGraph;
        createGraph(&myGraph);

        int n; // 그래프 크기
        printf("그래프의 크기를 입력하세요: ");
        scanf("%d", &n);

        // 정점 삽입
        for (int i = 0; i < n; i++) {
            insertVertex(&myGraph, i);
        }

        int m; // 간선 개수
        printf("간선의 개수를 입력하세요: ");
        scanf("%d", &m);

        // 간선 정보 삽입
        printf("간선 정보를 입력하세요 (예: 0 1, 1 2, ...): \n");
        for (int i = 0; i < m; i++) {
            int u, v;
            scanf("%d %d", &u, &v);
            insertEdge(&myGraph, u, v);
        }

        // 인접 리스트 출력
        printf("인접 리스트 출력:\n");
        print_adjList(&myGraph);

        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    
    else if(choice==11){
        graphType myGraph;
        createGraph(&myGraph);

        int n; // 그래프 크기
        printf("그래프의 크기를 입력하세요: ");
        scanf("%d", &n);

        // 정점 삽입
        for (int i = 0; i < n; i++) {
            insertVertex(&myGraph, i);
        }

        // 간선 정보 삽입
        printf("간선 정보를 입력하세요 (예: 0 1, 1 2, ...): \n");
        int u, v;
        while (1) {
            scanf("%d %d", &u, &v);
            if (u == -1 || v == -1)
                break;
            insertEdge(&myGraph, u, v);
        }

        // DFS 수행
        printf("DFS 결과: ");
        int startVertex;
        printf("DFS 시작 정점을 입력하세요: ");
        scanf("%d", &startVertex);

        DFS_adjList(&myGraph, startVertex);

        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==12){
        graphType myGraph;
        createGraph(&myGraph);

        int n; // 그래프 크기
        printf("그래프의 크기를 입력하세요: ");
        scanf("%d", &n);

        // 정점 삽입
        for (int i = 0; i < n; i++) {
            insertVertex(&myGraph, i);
        }

        // 간선 정보 삽입
        printf("간선 정보를 입력하세요 (예: 0 1, 1 2, ...): \n");
        int u, v;
        while (1) {
            scanf("%d %d", &u, &v);
            if (u == -1 || v == -1)
                break;
            insertEdge(&myGraph, u, v);
        }

        // BFS 수행
        printf("BFS 결과: ");
        int startVertex;
        printf("BFS 시작 정점을 입력하세요: ");
        scanf("%d", &startVertex);

        BFS_adjList(&myGraph, startVertex);

        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    
    else if(choice==13){
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==14){
       GraphType_f g;
       initializeGraph2(&g);
       floyd(&g);
            
            while (1) {
                printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
                scanf(" %c", &ch);
                
                if (ch == 'e') {
                    break;
                } else if (ch == 'r') {
                    continue;
                } else {
                    printf("잘못 입력했습니다. ");
                }
            }
            
            if (ch == 'e') {
                exit(0);
            }
        }
    else if(choice==15){
        HashTable *table = CreateHashTable(11);
            
        char key[100];
        char value[100];

        // 사용자에게 키와 값을 입력받아 해시 테이블에 데이터 삽입
        while (1)
        {
            printf("Enter key (type 'exit' to exit): ");
            scanf("%s", key);

            if (strcmp(key, "exit") == 0)
            {
                break;
            }

            printf("Enter value: ");
            scanf("%s", value);

            Insert(&table, key, value);
        }

        // 사용자에게 조회할 키를 입력받아 해시 테이블에서 조회
        while (1)
        {
            printf("Enter key to get value (type 'exit' to exit): ");
            scanf("%s", key);

            if (strcmp(key, "exit") == 0)
            {
                break;
            }

            char *retrievedValue = GetValue(table, key);
            if (retrievedValue != NULL)
            {
                printf("Key: %s, Value: %s\n", key, retrievedValue);
            }
            else
            {
                printf("Key not found: %s\n", key);
            }
        }

        DestroyHashTable(table);
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==16){
        int vertexCount, edgeCount;
        
        // 사용자에게 정점과 간선의 수를 입력 받음
        printf("정점의 수를 입력하세요: ");
        scanf("%d", &vertexCount);
        
        printf("간선의 수를 입력하세요: ");
        scanf("%d", &edgeCount);
        
        for (int i = 0; i < vertexCount; i++)
            makeVertices();
        
        // 간선 정보를 입력 받음
        for (int i = 0; i < edgeCount; i++) {
            int v1, v2;
            printf("간선 %d 입력 (정점1 정점2): ", i + 1);
            scanf("%d %d", &v1, &v2);
            insertEdges(v1, v2);
        }
        
        printf("\n그래프 정보:\n");
        print();
        
        printf("\n위상 정렬 결과:\n");
        topologicalSort();
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    else if(choice==17){
        char s1[100], s2[100];
        
        printf("Enter string s1: ");
        scanf("%s", s1);
        printf("Enter string s2: ");
        scanf("%s", s2);
        
        if (checkInclusion(s1, s2)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
        
        while (1) {
            printf("\n프로그램 종료를 원하시면 'e'를, 프로그램 재시작을 원하시면 'r'을 입력해 주세요 >> ");
            scanf(" %c", &ch);
            
            if (ch == 'e') {
                break;
            } else if (ch == 'r') {
                continue;
            } else {
                printf("잘못 입력했습니다. ");
            }
        }
        
        if (ch == 'e') {
            exit(0);
        }
    }
    return 0;
}
