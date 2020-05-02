#include<bits/stdc++.h>
using namespace std;

int number = 7;
int c[7];
vector<int> a[8];

void bfs(int firstnode)
{
	queue<int> q;
	q.push(firstnode);
	//방문 체크 
	c[firstnode-1]++;
	
	while(!q.empty()){
		for(int i=0; i<a[q.front()].size(); i++)
		{
			if(c[a[q.front()][i]-1] == 0)
			{
				q.push(a[q.front()][i]);
				c[a[q.front()][i]-1]++;
			}
		}
		cout<<q.front()<<" ";
		q.pop();
	}
}

int main()
{
	a[1].push_back(2);
	a[2].push_back(1);
	
	a[1].push_back(3);
	a[3].push_back(1);
	
	a[2].push_back(3);
	a[3].push_back(2);
	
	a[2].push_back(4);
	a[4].push_back(2);
	
	a[2].push_back(5);
	a[5].push_back(2);
	
	a[3].push_back(6);
	a[6].push_back(3);
	
	a[3].push_back(7);
	a[7].push_back(3);
	
	a[4].push_back(5);
	a[5].push_back(4);
	
	a[6].push_back(7);
	a[7].push_back(6);
	
	bfs(1);
	return 0;
}
