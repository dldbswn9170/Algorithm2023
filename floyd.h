#define MAX_VERTICES 100
#define INF 1000000

typedef struct GraphType_f
{
   int n; // 정점의 개수
   int weight[MAX_VERTICES][MAX_VERTICES];
} GraphType_f;

extern int A[MAX_VERTICES][MAX_VERTICES];

void printA(GraphType_f *g);
void initializeGraph2(GraphType_f *g);
void floyd(GraphType_f *g);
