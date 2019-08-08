#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;

	if(v2>=v1)
	{
		cout<<"NO";
	}
	else if((x2-x1)%(v2-v1)==0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	cout<<endl;
	return 0;
}
