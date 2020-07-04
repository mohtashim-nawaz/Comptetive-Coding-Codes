/*
Given an array of n elements. Our task is to write a program to rearrange the array such that elements at even positions are greater than all elements before it and elements at odd positions are less than all elements before it.
*/

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
		temp[i]=arr[i];
	sort(temp,temp+n);
	int odd = n-n/2;
	int even = n/2;
	int j=0;
	for(int i=odd-1;i>=0;i--)
	{
		arr[j]=temp[i];
		j+=2;
		if(j>=n)
			break;
	}
	j=1;
	for(int i=odd;i<n;i++)
	{
		arr[j]=temp[i];
		j+=2;
		if(j>=n)
			break;
	}
}

int main() {
	int n=8;
	int arr[]={1,2,1,4,5,6,8,8};
	rearrange(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
