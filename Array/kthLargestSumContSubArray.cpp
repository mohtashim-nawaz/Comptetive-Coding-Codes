// Find k-th largest sum contiguous sub array

#include <bits/stdc++.h>
using namespace std;

int findKSumSub(int arr[], int n, int k)
{
	int sum[n];
	sum[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		sum[i]=sum[i-1]+arr[i];
	}
	priority_queue<int, vector<int>, greater<int>> p;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			int x = sum[j]-sum[i-1];
			if(p.size()<k)
				p.push(x);
			else
			{
				if(p.top()<x)
				{
					p.pop();
					p.push(x);
				}
			}
		}
	}
	return p.top();
}

int main() {
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int l=findKSumSub(arr,n,k);
	cout<<l<<"\n";
	return 0;
}
