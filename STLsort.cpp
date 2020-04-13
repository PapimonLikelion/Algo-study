#include<iostream>
#include<algorithm>
using namespace std;

bool smaller(int a, int b){
	//smaller goes to left
	return a<b; 
}

bool bigger(int a, int b){
	//smaller goes to left
	return a>b; 
}


int main(void){
	int a[10]={9,3,5,4,7,6,8,1,0,10};
	sort(a, a+10, bigger);
	for(int i=0; i<10; i++){
		cout<<a[i]<<" ";
	}
}
