#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;

	int cnt = 1;
	int length = s.length();
	for(int i=0; i<length; i++)
	{
		if((s[i]>='A') && (s[i]<='Z'))
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
