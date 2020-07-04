// Replace array element with multiplication of previous and next element.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int prev = arr[0];
		arr[0] = arr[0] * arr[1];
		for(int i=1;i<n-1;i++)
		{
			int cur = arr[i];
			arr[i] = prev*arr[i+1];
			prev = cur;
		}
		arr[n-1] = arr[n-1]*prev;
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
