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

	sort(arr,arr+n);

	int cnt=0;               

	for(int i=0; i<n; i++)
	{
		cout<< n-cnt <<endl;
		int temp = 1;

		for(int j=i+1; j<n; j++)
		{                                          
			if(arr[i]==arr[j])
				temp++;
				
			else {
									
				i = j-1;
				break;
			}
			
				
		}
		cnt = cnt + temp;
		if(cnt==n)
			 break;
	}
	
	return 0;
}
