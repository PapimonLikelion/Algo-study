#include<bits/stdc++.h>
using namespace std;

int number = 9;
int c_rec[9];
int c_stack[9];
vector<int> a[9];

void dfs_stack(int start)
{
	stack<int> s; 
	s.push(start);
	c_stack[start]++;
	while(!s.empty()){
		int top = s.top();
		int size = a[top].size();
		cout<<top<<" ";
		s.pop();
		for(int i=0; i<size; i++){
			if( !c_stack[a[top][i]]) {
				s.push(a[top][i]);
				c_stack[a[top][i]]++;
			}
		}
	}
}

void dfs_recursion(int start)
{
	cout<<start<<" ";
	c_rec[start]++;
	int size = a[start].size();
	for(int i=0; i<size; i++){
		if(! c_rec[a[start][i]] ) {
			c_rec[a[start][i]]++;
			dfs_recursion(a[start][i]);
		}
	}
}

int main()
{
	//1
	a[0].push_back(1);
	a[1].push_back(0);
	//2
	a[1].push_back(2);
	a[2].push_back(1);
	//3
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[2].push_back(4);
	a[4].push_back(2);
	//4
	a[2].push_back(3);
	a[3].push_back(2);
	//5
	a[3].push_back(4);
	a[4].push_back(3);
	
	//7
	a[3].push_back(5);
	a[5].push_back(3);
	
	//8
	a[5].push_back(6);
	a[6].push_back(5);
	
	//9
	a[5].push_back(7);
	a[7].push_back(5);

	//10
	a[6].push_back(8);
	a[8].push_back(6);
	
	dfs_recursion(0);
	cout<<endl;
	dfs_stack(0);
	
	return 0;
}
