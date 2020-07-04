/*
  Given an array of positive and negative numbers,
  arrange them such that all negative integers appear before
  all the positive integers in the array without using
  any additional data structure like hash table, arrays, etc.
  The order of appearance should be maintained.
*/

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int r, int m)
{
	int n1 = m-l+1;
	int n2 = r-m;
	int L[n1], R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		R[i]=arr[m+1+i];
	}
	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && L[i]<0)
	{
		arr[k++]=L[i++];
	}
	while(j<n2 && R[j]<0)
	{
		arr[k++]=R[j++];
	}
	while(i<n1)
		arr[k++]=L[i++];
	while(j<n2)
		arr[k++]=R[j++];
}

void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m = l+(r-l)/2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, r, m);
	}
}

int main() {
	int n = 9;
	int arr[] = { -12, 11, -13, -5, 6, -7, 5, -3, -6 };
	mergeSort(arr, 0, n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
