#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);

	int cnt=0;
	int i=0;
	while(i<n-1)
	{
		if(arr[i]==arr[i+1])
		{
			cnt++;		
		}
		
		i+=2;
	}
	cout<<cnt<<endl;
	return 0;
}
