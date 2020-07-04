//Fisher-yates random shuffle of array
#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int arr[] = {1,2,3,4,5,6,7};
	srand(time(NULL));
	for(int i=6;i>0;i--)
	{
		int index = rand()%(i+1);
		swap(&arr[i],&arr[index]);
	}
	for(int i=0;i<7;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
