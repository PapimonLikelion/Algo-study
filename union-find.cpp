#include<bits/stdc++.h>
using namespace std;

/*
int getParent(int parent[], int x)
{
	if(parent[x] == x)
		return x;
	else
		return parent[x] = getParent(parent, parent[x]);
}
*/

void unionParent(int parent[], int node1, int node2)
{
	if(parent[node1] != parent[node2])
	{
		if(node1<node2){
			int root = parent[node1];
			while(parent[root] != root)
			{
				root = parent[root];
			}
			parent[node2] = root;
		}
		else{
			int root = parent[node2];
			while(parent[root] != root)
			{
				root = parent[root];
			}			
			parent[node1] = root;
		}
	}
}

string findParent(int parent[], int node1, int node2)
{
	int root1 = parent[node1];
	while(parent[root1] != root1)
		root1 = parent[root1];
		
	int root2 = parent[node2];
	while(parent[root2] != root2)
		root2 = parent[root2];
		
	if(root1 == root2)
		return "YES";
	else
		return "NO";
}

int main(void)
{
	int parent[11];
	for(int i=1; i<=10; i++)
		parent[i] = i;
	
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	cout<<"is 1 and 5 connected? " << findParent(parent, 1, 5)<<endl;
	unionParent(parent, 1, 5);
	cout<<"is 1 and 5 connected? " << findParent(parent, 1, 5)<<endl;
	cout<<"is 1 and 6 connected? " << findParent(parent, 1, 6)<<endl;
	
	
	for(int i=1; i<=8; i++)
		cout<<i<<"--"<<parent[i]<<endl;
	
	return 0;
}
