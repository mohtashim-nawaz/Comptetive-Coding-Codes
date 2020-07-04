// Min swaps required to bring all elements less than equal to k together.
// Use of window function

#include <bits/stdc++.h>
using namespace std;

int findMinSwaps(int arr[], int n, int k)
{
	int counter = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=k)
			counter++;
	}
	cout<<counter<<endl;
	int m = 0;  //to keep max count
	for(int i=0;i<counter;i++)
	{
		if(arr[i]<=k)
		{
			m++;
		}
	}
	cout<<m<<endl;
	int countMin = m;
	for(int i=1;i<n-counter+1;i++)
	{
		if(arr[i-1]<=k)
			countMin--;
		if(arr[i+counter-1]<=k)
			countMin++;
		m = max(m, countMin); 
	}
	cout<<m<<endl;
	return counter-m;
}

int main() {
	int n = 7;
	int k = 5;
	int arr[] = {2, 7, 9, 5, 8, 7, 4};
	int minSwaps = findMinSwaps(arr, n, k);
	cout<<minSwaps;
	return 0;
}
