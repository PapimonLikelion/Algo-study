#include<bits/stdc++.h>
using namespace std;

int getParent(int parent[], int node)
{
	while(node!=parent[node])
		node=parent[node];
	return node;
}

bool sameParent(int parent[], int node1, int node2)
{
//	while(node1!=parent[node1])
//		node1 = parent[node1];	
//	while(node2!=parent[node2])
//		node2 = parent[node2];
	node1 = getParent(parent, node1);
	node2 = getParent(parent, node2);	
	if(node1==node2)
		return true;
	else
		return false;
}

void unionGraph(int parent[], int node1, int node2)
{
//	while(node1!=parent[node1])
//		node1 = parent[node1];	
//	while(node2!=parent[node2])
//		node2 = parent[node2];
	node1 = getParent(parent, node1);
	node2 = getParent(parent, node2);			
	if(node1 < node2)
		parent[node2] = node1;
	else
		parent[node1] = node2;
}


class Edge{
public:
	int node1, node2, distance;
	
	Edge(int a, int b, int dist){
		node1 = a;
		node2 = b;
		distance = dist;
	}
	
	bool operator < (Edge &edge){
		return this->distance < edge.distance;
	}
};


int main()
{
	int node = 7;
	int road = 11;
	
	vector<Edge> v;
	v.push_back(Edge(1,7,12));
	v.push_back(Edge(1,4,28));
	v.push_back(Edge(1,2,67));
	v.push_back(Edge(1,5,17));
	v.push_back(Edge(2,4,24));
	v.push_back(Edge(2,5,62));
	v.push_back(Edge(3,5,20));
	v.push_back(Edge(3,6,37));
	v.push_back(Edge(4,7,13));
	v.push_back(Edge(5,6,45));
	v.push_back(Edge(5,7,73));
	/*
	(1,7,12)
	(4,7,13)
	(1,5,17)
	(2,4,24)
	(1,4,28)
	(3,6,37)
	(4,6,45)
	(2,5,62)
	(1,2,67)
	(5,7,73)
	*/
	sort(v.begin(), v.end());
	
	int parent[node+1];
	for(int i=0; i<node+1; i++)
	{
		parent[i] = i;
	}
	
	//연결하려고 보니까 root가 같네? 그러면 싸이클인데?  
	int connection = 0;
	int shortest_path = 0;
	for(int i=0; i<road; i++)
	{	
		if(connection == node)
			break;
		else{
			//만약 두개의 부모가 같지 않다면! 연결해주자! 
			if(!sameParent(parent, v[i].node1, v[i].node2)){
				cout<<"v[i].distance : "<<v[i].distance<<endl;
				shortest_path += v[i].distance;
				unionGraph(parent, v[i].node1, v[i].node2);
				connection++;
			}
		}
	}
	cout<<shortest_path;
}
