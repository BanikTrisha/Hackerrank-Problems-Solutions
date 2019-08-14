#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int b,n,m;
	cin>>b>>n>>m;
	long long int key[n],usb[m];

	for(int i=0; i<n; i++)
	{
		cin>>key[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>usb[i];
	}

	vector<int>v;
	int sum = 0;
	//adding two array and push those elements into a vector which are less then b
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
		sum =  key[i] + usb[j];
		if(sum<=b){
		v.push_back(sum);
		sum=0;
		}
	}
		

	}

	if(v.empty())
	{
		cout<<"-1"<<endl;
		return 0;
	}
	else{
	
	int max_value=v[0];
	int size = v.size();
	for(int i=0; i<size; i++)
	{
		if(max_value<v[i])
		{
			max_value = v[i];
		}
	}
	cout<<max_value<<endl;
	}
	
	return 0;
}
