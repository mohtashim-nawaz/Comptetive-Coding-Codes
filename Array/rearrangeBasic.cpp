//Rearrange such that arr[i]=i
// Another approach is  using temp[] array as hash array


#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void rearrange(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=0 && arr[i]!=i)
			swap(&arr[i], &arr[arr[i]]);
		else
			i++;
	}
}

int main() {
	int n = 5;
	int arr[] = {1,0,-1,3,4};
	rearrange(arr, n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
