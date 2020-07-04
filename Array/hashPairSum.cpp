//count of array pairs having sum = k using hash table

#include <bits/sdtc+.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		unordered_map<int,int> m;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
		}
		int count=0;
		for(int i=0;i<n;i++)
		{
			count+=(m[k-arr[i]]);
			if(arr[i]==k-arr[i])
			{
				count--;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
