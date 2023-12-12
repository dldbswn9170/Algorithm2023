#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "prim.h"

#pragma warning(disable:4996)
#define INF 1e9+10 // 무한대

void prim_push(int x, int y) {
    pq[pqNum].prim_v = x; pq[pqNum].prim_w = y;
    pqNum++;
}

void prim_pop() {
    pqNum--;
}

int prim_isEmpty() {
    if (pqNum == 0) return 1;
    else return 0;
}

void prim_sort() {
    for (int i = 0; i < pqNum; i++) {
        for (int j = pqNum - 1; j > 0; j--) {
            if (pq[j].prim_w > pq[j - 1].prim_w) {
                prim_graph tmp = pq[j];
                pq[j] = pq[j - 1];
                pq[j - 1] = tmp;
            }
        }
    }
}
