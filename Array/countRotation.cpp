// Count number of rotaions in sorted-rotated array

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int b, int e)
{
	if(b<=e)
	{
		int mid = b+(e-b)/2;
		if(mid<e && arr[mid]>arr[mid+1])
			return mid;
		if(mid>b && arr[mid]<arr[mid-1])
			return mid-1;
		else if(arr[b]>=arr[mid])
			return getPivot(arr, b, mid-1);
		return getPivot(arr, mid+1, e);
	}
	return -1;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pivIndex = getPivot(arr,0,n-1);
	cout<<pivIndex+1<<endl;
	return 0;
}
