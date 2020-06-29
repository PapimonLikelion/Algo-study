#include<iostream>
using namespace std;

int until_number = 0;

int main()
{
	cout<<"Number : ";
	cin>>until_number;
	int array[until_number+1];
	for(int i=1; i<until_number+1; i++){
		array[i] = i;
	}
	
	int number;
	for(int i=2; i<until_number+1; i++){
		if(array[i]==0){
			continue;
		}
		cout<<array[i]<<" "<<endl;
		number = 2;
		int j = i*number;
		while(j<until_number+1){
			array[j] = 0;
			number++;
			j= i*number;		
		}
		number = 0;
	}
	
}
