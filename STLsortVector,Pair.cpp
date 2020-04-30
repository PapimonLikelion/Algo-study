#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare( pair<int, pair<int, string>> a, pair<int, pair<int, string>> b )
{
	//If same score -> more age comes first
	if(a.second.first == b.second.first){
		cout<<a.second.second<<" "<<b.second.second<<endl;
		cout<<a.first<<" "<<b.first<<endl;
		return a.first > b.first;
	}
	return a.second.first < b.second.first;
}


int main()
{
	vector<pair<int, pair<int, string>>> students;
	students.push_back((make_pair(20, make_pair(100, "Tildy"))));
	students.push_back((make_pair(24, make_pair(100, "Joel"))));
	students.push_back((make_pair(23, make_pair(70, "Chris"))));
	students.push_back((make_pair(22, make_pair(80, "Adam"))));
	students.push_back((make_pair(21, make_pair(90, "Bach"))));
	
	sort(students.begin(), students.end(), compare);
	for(int i=0; i<students.size(); i++)
		cout<< students[i].second.second<<" ";
	
}
