#define MAX_VERTICES 100
#define INF 1000000

typedef struct GraphType
{
    int n; // 정점의 개수
    int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType;

void initialize_graph(GraphType *g);
void print_status(GraphType *g);
void shortest_path(GraphType *g, int start);
