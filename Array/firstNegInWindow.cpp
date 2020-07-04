//Find first negative in each window of size k


#include <bits/stdc++.h>
using namespace std;

void printPrevWin(int win[],int k)
{
	for(int i=0;i<k;i++)
	{
		if(win[i]<0)
		{
			cout<<win[i]<<" ";
			return;
		}	
	}
		
	cout<<0<<" ";
}

void rotateWin(int win[], int k)
{
	reverse(win+1,win+k);
	reverse(win, win+k);
}

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		long int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int k;
		cin>>k;
		int win[k];
		
		for(int i=0;i<k;i++)
		{
			if(arr[i]<0)
				win[i]=arr[i];
			else
				win[i]=0;
		}
		for(int i=1;i<=n-k+1;i++)
		{
			printPrevWin(win,k);
			rotateWin(win,k);
			if(arr[i+k-1]<0)
				win[k-1]=arr[i+k-1];
			else
				win[k-1]=0;
		}
		cout<<endl;
	}
	return 0;
}
