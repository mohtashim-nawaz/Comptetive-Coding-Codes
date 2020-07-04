// Arrange array such that first element is max, second is min, third is second max, fourth is second min and so on....

#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int s, int n)
{
	reverse(arr+s,arr+n-1);
	reverse(arr+n-1,arr+n);
	reverse(arr+s,arr+n);
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int s=0;
	//cout<<"flag1\n";
	while(s<n)
	{
		//cout<<"flag2\n";
		rotateArray(arr,s,n);
		s = s+2;
	}
	//cout<<"flag3\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
