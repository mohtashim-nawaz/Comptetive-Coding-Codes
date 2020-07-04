// First three largest in O(n) time
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int a=-9999,b=-9999,c=-9999;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>a)
		{
			c=b;
			b=a;
			a=arr[i];
		}
		else if(arr[i]>b)
		{
			c=b;
			b=arr[i];
		}
		else if(arr[i]>c)
		{
			c=arr[i];
		}
	}
	cout<<"first: "<<a<<" second: "<<b<<" third: "<<c<<endl;
	return 0;
}
