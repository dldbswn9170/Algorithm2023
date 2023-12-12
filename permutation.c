#include "permutation.h"
#include <stdio.h>
#include <string.h>

void str_perm(char *s, int start, char permutations[1000][100], int *perm_count) {
    int len = (int)strlen(s);
    if (start == len) {
        strcpy(permutations[*perm_count], s);
        (*perm_count)++;
        return;
    }
    
    for (int i = start; i < len; i++) {
        char temp = s[start];
        s[start] = s[i];
        s[i] = temp;
        
        str_perm(s, start + 1, permutations, perm_count);
        
        temp = s[start];
        s[start] = s[i];
        s[i] = temp;
    }
}

bool contains(char *s2, char *s1) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    for (int i = 0; i <= len2 - len1; i++) {
        if (strncmp(&s2[i], s1, len1) == 0) {
            return true;
        }
    }
    
    return false;
}

bool checkInclusion(char *s1, char *s2) {
    char permutations[1000][100];
    int perm_count = 0;
    
    str_perm(s1, 0, permutations, &perm_count);
    
    for (int i = 0; i < perm_count; i++) {
        if (contains(s2, permutations[i])) {
            return true;
        }
    }
    
    return false;
}
