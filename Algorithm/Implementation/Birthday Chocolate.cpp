#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
		cin>>arr[i];
	}
	int day,month;
	cin>>day>>month;

	int sum=0, cnt=0;
	for(int i=0; i<=n-1; i++)
	{
		for(int j=i, x=1; x<=month; x++,j++)
		{
			sum+= arr[j];
		}
		if(sum==day)
		{
			cnt++;
		}
		sum = 0;
	}
	cout<<cnt<<endl;
	return 0;
}
	
