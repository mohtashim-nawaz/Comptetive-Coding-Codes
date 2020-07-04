/*
Given a sorted array rearrange such that
max, min, second max, second min and so on in O(1) space.
*/

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int max_index = n-1;
	int min_index = 0;
	int max_ele = arr[n-1]+1;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			arr[i]+=((arr[max_index] %max_ele)*max_ele);
			max_index--;
		}
		else
		{
			arr[i]+=((arr[min_index] %max_ele)*max_ele);
			min_index++;
		}
	}
	for(int i=0;i<n;i++)
		arr[i]/=max_ele;
}

int main() {
	int n = 7;
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	rearrange(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
