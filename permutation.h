#ifndef PERMUTATION_H
#define PERMUTATION_H

#include <stdbool.h>

void str_perm(char *s, int start, char permutations[1000][100], int *perm_count);
bool contains(char *s2, char *s1);
bool checkInclusion(char *s1, char *s2);

#endif // PERMUTATION_H
