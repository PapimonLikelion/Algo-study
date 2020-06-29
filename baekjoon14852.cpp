#include<iostream>
using namespace std;

long long int dp[10000001][2];


long long int dynamic_prog(int x)
{
	dp[0][0] = 1;
	dp[1][0] = 2;
	dp[2][0] = 7;
	dp[2][1] = 0;	
	if(x==0) return dp[0][0];
	if(x==1) return dp[1][0];
	if(x==2) return dp[2][0];

	for(int i=3;i<=x;i++){
		dp[i][1] = (dp[i-1][1] + dp[i-3][0]) % 1000000007;
		dp[i][0] = ( 3*dp[i-2][0] + 2*dp[i-1][0] + 2*dp[i][1] ) % 1000000007;		
	}

	return dp[x][0];	
}


int main()
{
	int num;
	cin>>num;
	cout<<dynamic_prog(num);
}
