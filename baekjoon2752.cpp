#include<bits/stdc++.h>
using namespace std;

int N;

int main()
{
	
	int array[3];
	cin>>array[0]>>array[1]>>array[2];
	
	sort(array,array+3);
	
	for(int j=0;j<N-1;j++)
		cout<<array[j]<<endl;
	cout<<array[N-1];
}
