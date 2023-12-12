#include <stdio.h>
#include "bst.h"
#include "treeSort.h"

void treeSort(int a[], int n) {
	treeNode* root = NULL;
	root = insertBSTNode(root, a[0]);

	for (int i = 1; i < n; i++)
		insertBSTNode(root, a[i]);
	displayInorder(root);
}
