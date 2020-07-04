/*
Rearrange an array in order – smallest, largest, 2nd smallest, 2nd largest, ..
*/

#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
	int temp[n];
	for(int i=0;i<n;i++)
		temp[i]=arr[i];
	sort(temp, temp+n);
	int i=0,j=n-1;
	for(int k=0;k<n;k++)
	{
		if(k%2==0)
		{
			arr[k]=temp[i];
			i++;
		}
		else
		{
			arr[k]=temp[j];
			j--;
		}
	}
}

int main() {
	int n=8;
	int arr[]={1,8,6,4,7,2,-1,0};
	rearrange(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
