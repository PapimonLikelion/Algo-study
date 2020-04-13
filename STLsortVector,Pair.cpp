#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare( pair<int, pair<int, string>> a, pair<int, pair<int, string>> b )
{
	if(a.second.first == b.second.first)
		return a.first > b.first;
	return a.second.first < b.second.first;
}


int main()
{
	vector<pair<int, pair<int, string>>> students;
	students.push_back((make_pair(24, make_pair(100, "Joel"))));
	students.push_back((make_pair(23, make_pair(70, "Chris"))));
	students.push_back((make_pair(22, make_pair(80, "Adam"))));
	students.push_back((make_pair(21, make_pair(90, "Bach"))));
	students.push_back((make_pair(20, make_pair(100, "Tildy"))));
	
	sort(students.begin(), students.end(), compare);
	for(int i=0; i<students.size(); i++)
		cout<< students[i].second.second<<" ";
	
}
