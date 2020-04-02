#include<iostream>
using namespace std;

int number=10;
int data[10]={3,7,8,1,5,9,6,10,2,4};

void show(int *data)
{
	for(int i=0;i<number;i++)
		cout<<data[i]<<" ";
	cout<<endl;
}

void quickSort(int *data, int start, int end)
{
	if(start>=end)
		return;
		
	int pivot = start;
	int i=start+1, j=end, temp=0;
	
	while(i <= j) // i와 j가 같아지는 경우 but needs change ex) 10(pivot) 9 <---- 이경우 9가 i,j 둘다 
	{
		//확실히 작아지거나 커지거나! 
		while(data[i]<=data[pivot] && i<=end)  // 마지막까지 확인  
			i++;
		while(data[j]>=data[pivot] && j>start) // pivot 건들지 말 
			j--;
			
		if(i>j){
			temp = data[pivot];
			data[pivot] = data[j];
			data[j] = temp;
		}else{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
		show(data);
	}
	
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);

}

int main(void)
{
	quickSort(data,0, number-1);
	cout<<"FINAL-----------"<<endl;
	show(data);
}
