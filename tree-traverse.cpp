#include<iostream>
using namespace std;

typedef struct node{
	int value;
	node* leftchild;
	node* rightchild;
}node;

void preorder(node* point)
{
	if(point){
		cout<<point->value<<" ";
		preorder(point->leftchild);
		preorder(point->rightchild);
	}
}

void inorder(node* point)
{
	if(point){
		inorder(point->leftchild);
		cout<<point->value<<" ";
		inorder(point->rightchild);
	}
}

void postorder(node* point)
{
	if(point){
		postorder(point->leftchild);
		postorder(point->rightchild);
		cout<<point->value<<" ";			
	}
}

int main()
{
	int num = 15;
	node nodes[num+1];
	for(int i=0; i<=num; i++){
		nodes[i].value = i;
		nodes[i].leftchild = NULL;
		nodes[i].rightchild = NULL;
	}
	for(int i=1; i<=num; i++){
		if(i%2==0)
			nodes[i/2].leftchild = &nodes[i];
		else
			nodes[i/2].rightchild = &nodes[i];
	}
	preorder(&nodes[1]);
	cout<<endl;
	inorder(&nodes[1]);
	cout<<endl;
	postorder(&nodes[1]);
	cout<<endl;
	return 0;	
}
