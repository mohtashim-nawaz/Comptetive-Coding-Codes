// To find if a pair with a given sum exists in the array
// Solution - Sort the array and use two pointer technique from beggining and end.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	sort(arr,arr+n);
	int i=0, j=n-1;
	bool flag=false;
	while(i<j)
	{
		if(arr[i]+arr[j]==sum)
		{
			flag=true;
			break;
		}
		else if(arr[i]+arr[j]>sum)
		{
			j--;
		}
		else if(arr[i]+arr[j]<sum)
		{
			i++;
		}
	}
	if(flag)
		cout<<"True";
	else 
		cout<<"False";
	return 0;
}
