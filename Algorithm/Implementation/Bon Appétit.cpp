#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;

	long long int item[n],bill;
	for(int i=0; i<n; i++)
	{
		cin>>item[i];
	}
	cin>>bill;

	int sum = 0;
	for(int i=0; i<n; i++)
	{
		sum = sum + item[i];
	}
	int ans = (sum-item[k])/2;
	if(ans==bill)
	{
		cout<<"Bon Appetit"<<endl;
	}
	else{
		cout<<bill-ans<<endl;
	}
	return 0;
}
