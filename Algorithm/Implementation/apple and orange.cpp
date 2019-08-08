#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,t,m,n,a,b;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    long long int arr[m], ara[n];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
     vector<int>apple;
    for(int i=0; i<m; i++)
    {
        apple.push_back(a + arr[i]);
    }
    vector<int>orange;
     for(int i=0; i<n; i++)
    {
        orange.push_back(b + ara[i]);
    }
    int app_cnt=0, ora_cnt=0;

    for(int i=0; i<apple.size(); i++)
    {
		if(apple[i]>=s && apple[i]<=t)
		{
			app_cnt++;
		}
	}
	 for(int i=0; i<orange.size(); i++)
    {
		if(orange[i]>=s && orange[i]<=t)
		{
			ora_cnt++;
		}
	}
	cout<<app_cnt<<endl;
	cout<<ora_cnt<<endl;
	return 0;
}
