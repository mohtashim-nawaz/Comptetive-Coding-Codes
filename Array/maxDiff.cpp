// Maximum difference such that larger element lies ahead of smaller element.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int max_diff = arr[1]-arr[0];
		int min_element = arr[0];
		for(int i = 1; i < n; i++) 
    	{      
    		if (arr[i] - min_element > max_diff)                              
    			max_diff = arr[i] - min_element; 
         
    		if (arr[i] < min_element) 
    			min_element = arr[i];                      
    	} 
    	cout<<max_diff<<endl;
	}
	return 0;
}
