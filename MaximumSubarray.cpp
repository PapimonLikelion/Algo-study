#include <bits/stdc++.h>
using namespace std;

tuple<int, int, int> findMaxCrossingSubarray(int A[], int low, int mid, int high){
	int leftsum = -999999;
	int sum=0, maxleft;
	for(int i=mid; i>=low; i--){
		sum = sum + A[i];
		if(sum>leftsum){
			leftsum = sum;
			maxleft = i;
		}
	}
	int rightsum = -999999, maxright;
	sum=0;
	for(int j=mid+1; j<=high; j++){
		sum = sum + A[j];
		if(sum>rightsum){
			rightsum = sum;
			maxright = j;
		}
	}
	return make_tuple(maxleft, maxright, leftsum+rightsum);	
}

tuple<int, int, int> findMaximumSubarray(int A[], int low, int high){
	if(low==high)
		return make_tuple(low, high, A[low]);
	else{
		int mid = (low+high-1)/2;
		int leftlow, lefthigh, leftsum;
		int rightlow, righthigh, rightsum;
		int crosslow, crosshigh, crosssum;
		//LEFT
		tie(leftlow, lefthigh, leftsum) = findMaximumSubarray(A, low, mid);
		//RIGHT
		tie(rightlow, righthigh, rightsum) = findMaximumSubarray(A, mid+1, high);
		//CENTER_CROSSING
		tie(crosslow, crosshigh, crosssum) = findMaxCrossingSubarray(A, low, mid, high);
		if(leftsum>=rightsum && leftsum>= crosssum)
			return make_tuple(leftlow, lefthigh, leftsum);
		else if(rightsum>=leftsum && rightsum>=crosssum)
			return make_tuple(rightlow, righthigh, rightsum);
		else
			return make_tuple(crosslow, crosshigh, crosssum);
	}
}


int main() {
//	int number;
//	cout<<"Enter the number of array elements: ";
//	cin>>number;
//	int A[number];
//	for(int i=0;i<number;i++){
//		cout<<"Enter the array element one by one -- ";
//		cin>>A[i];
//	}
//	
	int number=1000;
	int A[number];
	for(int i=0;i<number;i++){
			A[i] = i;
	}
	
	int resultleft, resultright, resultsum;
	tie(resultleft, resultright, resultsum) = findMaximumSubarray(A, 0, number-1);
	cout<<resultleft<<" "<<resultright<<" "<<resultsum<<endl;
	return 0;
}


