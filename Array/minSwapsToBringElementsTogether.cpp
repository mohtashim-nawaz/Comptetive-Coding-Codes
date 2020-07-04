// Minimum swaps required to bring elements less than or equal to k together in an array

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=k)
			count++;
	}
	int ans = 0;
	for(int i=0;i<count;i++)
	{
		if(arr[i]>k)
			ans++;
	}
	int bad=ans;
	for(int i=1,j=count; j<n;i++,j++)
	{
		if(arr[i-1]>k)
			bad--;
		if(arr[j]>k)
			bad++;
		ans = min(bad, ans);
	}
	cout<<ans;
	return 0;
}
