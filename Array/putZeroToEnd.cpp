// Put all zeros to end and don't change respective order of other elements

#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int l, int r)
{
	reverse(arr+l, arr+r);
	reverse(arr+l, arr+r+1);
}

void rearrange(int arr[], int n)
{
	int counter=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=0)
		{
			counter++;
			arr[counter]=arr[i];
		}
	}
	for(int i=counter+1;i<n;i++)
	{
		arr[i]=0;
	}
}

int main() {
	int n=7;
	int arr[] = {1,0,-2,0,4,0,5};
	rearrange(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
