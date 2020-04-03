#include<stdio.h>
using namespace std;

int number;
int temp;
int data[1000000];

void print(int *data)
{
	for(int i=0;i<number-1;i++)
		printf("%d\n",data[i]);
	printf("%d",data[number-1]);
}

void quickSort(int *data, int start, int end){
	if(start>=end)
		return;
	int pivot = start;
	int i = start+1;
	int j = end;
	//if j>i out 
	while(i<=j)
	{
		while(data[i] <= data[pivot] && i<=end){
			i++;
		}
		while(data[j] >= data[pivot] && j>=start+1){
			j--;
		}
		if(i>j){
			temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		}else{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}
//	print(data);
	quickSort(data,start,j-1);
	quickSort(data,j+1,end);
}

int main()
{
	scanf("%d",&number);
	for(int i=0;i<number;i++)
		scanf("%d",&data[i]);
	quickSort(data,0,number-1);
	print(data);
}
