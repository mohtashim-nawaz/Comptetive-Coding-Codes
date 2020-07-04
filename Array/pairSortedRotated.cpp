// Find if pair with given sum exists in sorted rotated array

#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int l, int h)
{
	if(l>h)
		return -1;
	if(l==h)
		return l;
	int m = (l+h)/2;
	if(l<m && arr[m-1]>arr[m])
		return m-1;
	if(m<h && arr[m+1]<arr[m])
		return m;
	if(arr[0]<arr[m])
		return pivot(arr,m+1,h);
	return pivot(arr,l,m-1);
}


bool findPair(int arr[], int n, int x)
{
	int p = pivot(arr,0,n-1);
	cout<<"Pivot: "<<arr[p]<<endl;
	int l = p;
	int r = (p+1)%n;
	int sum=0;
	while(l!=r)
	{
		sum = arr[l]+arr[r];
		if(sum==x)
			return true;
		else if(sum<x)
			r = (r+1)%n;
		else
			l = (l-1+n)%n;
	}
	return false;
}


int main() {
	int n=5;
	int arr[] = {3,4,5,1,2};
	if(findPair(arr,n,10))
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
