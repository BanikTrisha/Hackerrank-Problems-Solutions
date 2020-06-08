#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,up=0,cnt=0;
    cin>>n;
    string s;

    for(int i=0; i<n; i++){
        cin>>s;
        if(s[i]=='U'){
            up++;
        }
        else up--;
        if(up==0 && s[i]=='U') cnt++;
    }
    cout<<cnt<<endl;
}
