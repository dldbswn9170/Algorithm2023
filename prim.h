typedef struct {
    int prim_v;
    int prim_w;
} prim_graph;

prim_graph adj[1000][1000];
prim_graph pq[1000];
int outDegree[10000];
int chk[1000];
int pqNum;
int ans;

void prim_push(int x, int y);
void prim_pop();
int prim_isEmpty();
void prim_sort();
