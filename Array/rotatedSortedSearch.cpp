//Searching element in sorted rotated Array--Duplicates are not there

#include <bits/stdc++.h>
using namespace std;

int getPivot(int arr[], int b, int e)
{
	if(b>e)
		return -1;
	else if(b==e)
		return b;
	int mid = (b+e)/2;
	if(mid<e && arr[mid]>arr[mid+1])
		return mid;
	if(mid>b && arr[mid]<arr[mid-1])
		return (mid-1);
	if(arr[b]>=arr[mid])
		return getPivot(arr,b,mid-1);
	return getPivot(arr,mid+1,e);
}
int main() {
	int arr[] = {4,5,6,7,1,2,3};
	int pivot = getPivot(arr, 0, 7);
	int num = 8;
	bool result1,result2;
	result1=binary_search(arr,arr+pivot+1,num);
	result2=binary_search(arr+pivot+1,arr+7,num);
	if(result1 || result2)
		cout<<"yes"<<endl;
	else 
		cout<<"no\n";
	return 0;
}
