#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, index, temp;
	int array[10] = {26,5,37,1,61,11,59,15,48,19};
	for(i=0;i<9;i++)
	{
		j=i;
		//교환이 필요한 경우... 앞에께 더 커! 
		while(j>=0 && array[j]>array[j+1])
		{
//			cout<<"J: "<<j<<endl;

			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	
	
	}
	
	
	for(i=0;i<10;i++)
	{
		cout<<array[i]<<" ";
	}
	return 0;
}
