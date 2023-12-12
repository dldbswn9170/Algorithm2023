#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "kruskal.h"

#pragma warning(disable:4996)
#define INF 1e9+10 // 무한대

void sort() {
    for (int i = 0; i < m; i++) {
        for (int j = m - 1; j > 0; j--) {
            if (k_adj[j].w < k_adj[j - 1].w) {
                graph tmp = k_adj[j];
                k_adj[j] = k_adj[j - 1];
                k_adj[j - 1] = tmp;
            }
        }
    }
}

int find(int x) {
    if (p[x] < 0) return x; // 음수면 이어져있지않음
    return p[x] = find(p[x]);
}

int isDiff(int u, int v) {
    u = find(u); v = find(v);
    if (u == v) return 0; // 부모가 같은 상황
    else if (u < v) p[v] = u;
    else p[u] = v;
    return 1;
}
