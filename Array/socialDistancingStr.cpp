// Fit maximum no of 1 in string of zeros and ones such that atleast k number of zeros are on both sides of each 1

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	int num=0;
	if(str.size()==1 && str[0]=='0')
	{
		cout<<1;
		return 0;
	}
	if(str.size()==1 && str[0]=='1')
	{
		cout<<0;
		return 0;
	}
	int contZero=0;
	int i=0;
	while(i<n)
	{
		if(str[i]=='1')
		{
			contZero=0;
			//i++;
		}
		if(str[i]=='0')
		{
			contZero++;
			//i++;
		}
		if(contZero>k)
		{
			bool isOk = true;
			for(int j=i;j<i+k;j++)
			{
				if(str[j]=='1')
				{
					isOk=false;
					break;
				}
			}
			if(isOk)
			{
				str[i]=1;
				//i=i+k;
				contZero=0;
				num++;
			}
			
		}
		i++;
	}
	cout<<num<<"\n"<<str;
	return 0;
}
