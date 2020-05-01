#include<bits/stdc++.h>
using namespace std;

bool cmp(string str1, string str2){
	//길이가 같다면 사전순으로 정렬하라 
	if(str1.length()==str2.length())
		return str1<str2;
	//길이가 다르다면 짧은게 우선 
	else
		return str1.length()<str2.length();
}

int main()
{
	int num;
	cin>>num;
	string str[num];
	for(int i=0; i<num; i++)
	{
		cin>>str[i];
	}
	
	sort(str, str+num, cmp);
	
	for(int i=0; i<num; i++)
	{
		if(i<num-1){		
			if(str[i] == str[i+1])
			{
				continue;
			}
			else
				cout<<str[i]<<endl;
		}
		else
			cout<<str[i]<<endl;
	}
}
