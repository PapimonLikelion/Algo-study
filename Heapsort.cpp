#include<iostream>
#include<vector>
using namespace std;

vector<int> v{-10,9,8,7,6,5,4,3,2,1,4,3,5,6,7,8,9,10,11,13,5,45,29,583,392};

void heap(int index)
{
	if(index>(v.size()-1)/2)
		return;
	int temp;
	int left_child = 2*index;
	//If there is right_child
	if(2*index+1 <= v.size()-1){
		int right_child = 2*index + 1;
		//Both children are bigger than the index
		if(v[index]<v[left_child] && v[index]<v[right_child]){
			if(v[left_child]<v[right_child])
			{
				temp = v[index];
				v[index] = v[right_child];
				v[right_child] = temp;
				heap(right_child);
				return;
			}
			else
			{
				temp = v[index];
				v[index] = v[left_child];
				v[left_child] = temp;
				heap(left_child);
				return;
			}
		}
		//Right child is bigger
		else if(v[index] < v[right_child]){
			temp = v[index];
			v[index] = v[right_child];
			v[right_child] = temp;
			heap(right_child);
			return;
		}
		//Left child is bigger
		else if(v[index] < v[left_child]){
			temp = v[index];
			v[index] = v[left_child];
			v[left_child] = temp;
			heap(left_child);
			return;		
		}
	}else{
		//Left child is bigger
		if(v[index] < v[left_child]){
			temp = v[index];
			v[index] = v[left_child];
			v[left_child] = temp;
			heap(left_child);
			return;		
		}		
	}
}

void heapify()
{
	int size = (v.size()-1)/2;
	for(int i=size; i>0; i--)
	{
		heap(i);
	}
	return;
}

int main()
{
	int last;
	int temp;
	int size = v.size()-1; 
	int result[size];
	while(v.size()!=1){	
		heapify();
		last = v.size()-1;
		temp = v[last];
		v[last] = v[1];
		v[1] = temp;
		result[last-1] = v[last];
		v.pop_back();
	}
	for(int i=0;i<size;i++)
	{
		cout<<result[i]<<" ";
	}
}
