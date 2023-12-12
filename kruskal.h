typedef struct {
    int v1;
    int v2;
    int w;
} graph;

graph k_adj[1000];
int p[1000];
int n, m;
int kruskal_ans;

void sort();
int find(int x);
int isDiff(int u, int v);
