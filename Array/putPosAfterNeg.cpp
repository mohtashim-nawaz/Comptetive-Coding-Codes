// Put all positives after negative maintaining the order of appearence

#include <bits/stdc++.h>
using namespace std;

bool rearrangeComp(int a, int b)
{
	if((a<0 && b<0)
	|| (a>0 && b>0)
	|| (b<0 && a>0))
		return false;

	if(a<0 && b>0)
		return true;

	if((a==0 && b<0)
		|| (b==0 && a>0))
		return false;

	if((a==0 && b>0)
		|| (a<0 && b==0))
		return true;
}

int main() {
	int n= 8;
	int arr[]={1,3,-2,-6,0,8,6,7};
	sort(arr,arr+n,rearrangeComp);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<"\n";
	return 0;
}
