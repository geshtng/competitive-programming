#include<bits/stdc++.h>
using namespace std;

bool b;

struct node{
	int key;
	struct node *left, *right;
};

struct node *newNode(int item){
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void preorder(struct node *root){
	if(root != NULL){
		if(b){
			printf("%c", root->key);
			b = false;
		} else {
			printf(" %c", root->key);
		}
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(struct node *root){
	if(root != NULL){
		inorder(root->left);
		if(b){
			printf("%c", root->key);
			b = false;
		} else {
			printf(" %c", root->key);
		}
		inorder(root->right);
	}
}

void postorder(struct node *root){
	if(root != NULL){
		postorder(root->left);
		postorder(root->right);
		if(b){
			printf("%c", root->key);
			b = false;
		} else {
			printf(" %c", root->key);
		}
	}
}

struct node* insert(struct node* node, char key) { 
    if (node == NULL) 
		return newNode(key); 
  
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
  
    return node; 
} 
bool search(struct node* root, char key){
	if(root == NULL)
		return false;
	else{
		if(key == root->key)
			return true;
		else{
			if(key < root->key)
				return search(root->left, key);
			else
				return search(root->right, key);
		}
	}
}

int main(){
	struct node *root = NULL;
	
	string str;
	char key;
	
	while(cin>>str){
		if(str=="I"){
			cin>>key;
			root = insert(root, key);
		}
		else if(str=="INFIXA"){
			b = true;
			inorder(root);
			cout<<endl;
		}
		else if(str=="PREFIXA"){
			b = true;
			preorder(root);
			cout<<endl;
		}
		else if(str=="POSFIXA"){
			b = true;
			postorder(root);
			cout<<endl;
		}
		else if(str=="P"){
			cin>>key;
			if(search(root, key)){
				cout<<key<<" existe"<<endl;
			} else {
				cout<<key<<" nao existe"<<endl;
			}
		}
	}
	
	return 0;
}
