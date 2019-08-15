#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
    string s;
	cin>>s;

	int length = s.length();
	bool lower=false, upper = false, digit = false, symbol = false;

	for(int i=0; i<length; i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			upper = true;
		}
		if(s[i]>='a' && s[i]<='z')
		{
			lower = true;
		}
		if(s[i]>='0' && s[i]<='9')
		{
			digit = true;
		}
		if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%'|| s[i]=='^'|| s[i]=='&'|| s[i]=='*'|| s[i]=='('|| s[i]==')'|| s[i]=='-'|| s[i]=='+')
		{
			symbol = true;
		}
	}

	int cnt = 0;
	if(!upper)
		cnt++;
	if(!lower)
		cnt++;
	if(!digit)
		cnt++;
	if(!symbol)
		cnt++;
	if((length + cnt) <6)
		cnt = cnt + (6-(length + cnt ));
		
	cout<<cnt<<endl;
	return 0;
}		

	
