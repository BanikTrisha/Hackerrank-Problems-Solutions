#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	long long int score[n];
	for(int i=0; i<n; i++)
	{
		cin>>score[i];
	}
	int s_max = score[0];
	int s_min = score[0];

	int cnt_max=0, cnt_min=0;
	for(int i=0; i<n; i++)
	{
		if(s_max<score[i])
		{
		    s_max = score[i];
		    cnt_max++;

		}
		
		if(s_min>score[i])
		{
		    s_min = score[i];
		    cnt_min++;

		}
	}
	cout<<cnt_max<<" "<<cnt_min<<endl;
	return 0;
}
		
		
