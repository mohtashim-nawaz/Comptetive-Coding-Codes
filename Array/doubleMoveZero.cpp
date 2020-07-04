// Double the next element and move to zero


#include <bits/stdc++.h>
using namespace std;

void moveToZero(int arr[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			arr[count]=arr[i];
			count++;
		}
	}
	for(int i=count;i<n;i++)
		arr[i]=0;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]!=0 && arr[i]==arr[i+1])
		{	
			arr[i]*=2;
			arr[i+1]=0;
		}
	}
	moveToZero(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
