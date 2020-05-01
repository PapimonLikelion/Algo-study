#include<iostream>
using namespace std;

int main()
{
	int array[30] = {1,3,2,4,3,2,5,3,1,2,3,4,4,3,5,1,2,3,5,2,3,1,4,3,5,1,2,1,1,1};
	int count[5] = {0};
	for(int i=0; i<30;i++){
		count[array[i]-1]++;
	}
	
	for(int k=0;k<5;k++){
		for(int i=0;i<count[k];i++)
			cout<<k+1<<" ";
	}
	return 0;
}
