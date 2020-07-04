// To find maximum of i*arr[i] given rotaions allowed.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	int arrSum=0;
	int curVal=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arrSum+=arr[i];
		curVal+=(i*arr[i]);
	}
	int max=curVal;
	for(int j=1;j<n;j++)
	{
		curVal = curVal+arrSum-(n*arr[n-j]);
		if(max<curVal)
			max=curVal;
	}
	cout<<max<<"\n";
	return 0;
}
