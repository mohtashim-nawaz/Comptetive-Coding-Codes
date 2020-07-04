//Arrange negative and positive such that relative order does not change

#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b)
{
	if((a<0 && b<0) || (a>0 && b>0) && (a>0 && b<0))
		return false;
	else if (a<0 && b>0)
		return true;
	else if((a==0 && b>0) || (b==0 && a<0))
		return true;
		
	return false;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n,comp);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}
