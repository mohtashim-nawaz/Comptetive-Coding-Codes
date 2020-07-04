// Arrange positive and negatives such that order does not change

#include <bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int l, int r)
{
	reverse(arr+l, arr+r);
	reverse(arr+l, arr+r+1);
}

void rearrange(int arr[], int n)
{
	int outOfPlace = -1;
	for(int index=0;index<n;index++)
	{
		if(outOfPlace>=0)
		{
			if((arr[index]<0 && arr[outOfPlace]>=0) || (arr[index]>=0 && arr[outOfPlace]<0))
			{
				rightRotate(arr,n,outOfPlace,index);
				if(index - outOfPlace>=2)
					outOfPlace+=2;
				else
					outOfPlace=-1;
			}
		}
		else if(outOfPlace==-1)
		{
			if((arr[index]>=0 && index%2==0) || (arr[index]<0 && index%2!=0))
			{
				outOfPlace=index;
			}
		}
	}
}

int main() {
	int n=7;
	int arr[] = {-2,1,3,-4,5,-8,9};
	rearrange(arr, n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
