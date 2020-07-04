//Segregate even odd

#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int left=0, right=n-1;
	while(left<right)
	{
		while(arr[left]%2==0 && left<right)
			left++;
		while(arr[right]%2!=0 && left<right)
			right--;
		if(left<right)
		{
			swap(&arr[left],&arr[right]);
			left++;
			right--;
		}
	}
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
