/*
Given an array of numbers, arrange them in a way that yields the largest value.
For example, if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654 gives the largest value.
And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 998764543431 gives the largest value.
*/

#include <bits/stdc++.h>
using namespace std;

bool compIt(int a, int b)
{
	string X = to_string(a);
	string Y = to_string(b);
	if(X.append(Y)>Y.append(X))
		return true;
	return false;
}

int main() {
	int n = 8;
	int arr[] = {1, 34, 3, 98, 9, 76, 45, 4};
	sort(arr, arr+n, compIt);
	for(int i=0;i<n;i++)
		cout<<arr[i];
	cout<<endl;
	return 0;
}
