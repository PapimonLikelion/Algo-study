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
	
	while(i <= j) // i�� j�� �������� ��� but needs change ex) 10(pivot) 9 <---- �̰�� 9�� i,j �Ѵ� 
	{
		//Ȯ���� �۾����ų� Ŀ���ų�! 
		while(data[i]<=data[pivot] && i<=end)  // ���������� Ȯ��  
			i++;
		while(data[j]>=data[pivot] && j>start) // pivot �ǵ��� �� 
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
