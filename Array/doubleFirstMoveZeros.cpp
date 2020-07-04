// Double first move move Zeros
/*
Given an array of integers of size n. Assume ‘0’ as invalid number and all other as valid number.
Convert the array in such a way that if next number is a valid number and same as current number,
double its value and replace the next number with 0. 
After the modification, rearrange the array such that all 0’s are shifted to the end.
*/
#include <bits/stdc++.h>
using namespace std;

void check(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]!=0 && arr[i+1]==arr[i])
		{
			arr[i]=2*arr[i];
			arr[i+1]=0;
		}
	}
}

void swap(int *a, int *b)
{
	int temp =*a;
	*a=*b;
	*b=temp;
}

void moveZeros(int arr[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(&arr[count], &arr[i]);
			count++;
		}
	}
}

int main() {
	int n=10;
	int arr[]={0, 2, 2, 2, 0, 6, 6, 0, 0, 8};
	check(arr, n);
	moveZeros(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<'\n';
	return 0;
}
