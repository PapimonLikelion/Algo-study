#include<bits/stdc++.h>
using namespace std;

bool cmp(string str1, string str2)
{
	if(str1.length() != str2.length())
		return str1.length() < str2.length();
		
	else{
		int str1_num = 0;
		int str2_num = 0;
		for(int i=0; i<str1.length(); i++){
			if('0'<=str1[i] && '9'>=str1[i]){
				str1_num += (str1[i]-48);
			}
		}
		for(int i=0; i<str2.length(); i++){
			if('0'<=str2[i] && '9'>=str2[i]){
				str2_num += (str2[i]-48);
			}
		}
		
		if(str1_num != str2_num){
			return str1_num < str2_num;
		}
			
		else
			return str1 < str2;	
		
	}
	
}

int main()
{
	int num;
	cin>>num;
	string serial[num];
	for(int i=0;i<num;i++)
	{
		cin>>serial[i];
	}
	
	sort(serial, serial+num, cmp);
	
	for(int i=0; i<num; i++)
	{
		cout<<serial[i]<<endl;
	}
	return 0;
}
