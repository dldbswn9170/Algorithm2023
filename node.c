#include <stdio.h>
#include "node.h"

void displayInorder(treeNode* root) {
	if (root) {
		displayInorder(root->left);
		printf("%5d", root->key);
		displayInorder(root->right);
	}
}
