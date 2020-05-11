#include<stdio.h>
#include<stdlib.h>

struct tree{
	int data;
	struct tree *left;
	struct tree *right;
};
typedef struct tree Tree;

Tree *pohon;

void tambah(Tree **root,int databaru){
	if((*root) == NULL){
		Tree *baru;
		baru = (Tree *)malloc(sizeof(Tree));
		baru->data = databaru;
		baru->left = NULL;
		baru->right = NULL;
		(*root) = baru;
		(*root)->left = NULL;
		(*root)->right = NULL;
	}
	else if(databaru < (*root)->data)
		tambah(&(*root)->left,databaru);
	else if(databaru > (*root)->data)
		tambah(&(*root)->right,databaru);
} 

void preOrder(Tree *root){
	if(root != NULL){
		printf(" %d", root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void inOrder(Tree *root){
	if(root != NULL){
		inOrder(root->left);
		printf(" %d", root->data);
		inOrder(root->right);
	}
}

void postOrder(Tree *root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf(" %d", root->data);
	}
}

int main(){
	int n, i, x, j;
	unsigned int z;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		for(j=0; j<x; j++){
			scanf("%d", &z);
			tambah(&pohon, z);
		}
		printf("Case %d:\n", i+1);
			printf("Pre.:");
			preOrder(pohon);
		printf("\n");
			printf("In..:");
			inOrder(pohon);
			printf("\n");
		printf("Post:");
			postOrder(pohon);
		printf("\n\n");
		pohon=0;
	}
	return 0;
}

