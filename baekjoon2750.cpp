#include<bits/stdc++.h>
using namespace std;


int main()
{
	int N;
	cin>>N;
	int array[N];
	for(int i=0;i<N;i++)
		cin>>array[i];
	
	//bubble sort
	int index;
	int temp;
	for(int i=0;i<N;i++)
	{
		int min = 9999;
		for(int j=i;j<N;j++)
		{
			if(min>array[j])
			{
				index = j;
				min = array[j];
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		
	}
	
	//insertion sort
	int index, temp,j;
	for(int i=0;i<N;i++)
	{
		for(j=i;j>0;j--)
		{
			if(array[j]<array[j-1])
			{
				temp=array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
			}	
		}
	}
	
	
	
	for(int j=0;j<N-1;j++)
		cout<<array[j]<<endl;
	cout<<array[N-1];
}
