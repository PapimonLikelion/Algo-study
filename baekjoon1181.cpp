#include<bits/stdc++.h>
using namespace std;

bool cmp(string str1, string str2){
	//���̰� ���ٸ� ���������� �����϶� 
	if(str1.length()==str2.length())
		return str1<str2;
	//���̰� �ٸ��ٸ� ª���� �켱 
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
