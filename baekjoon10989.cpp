#include<iostream>
using namespace std;

int num, input;
int result[10001];

int main()
{
	scanf("%d", &num);
	for(int i=0; i<num; i++)
	{
		scanf("%d", &input);
		result[input]++;
	}
	
	
	for(int k=0; k<10001; k++){
		for(int i=0; i<result[k]; i++)
		{
			printf("%d\n",k);
		}
	}
	return 0;
}
