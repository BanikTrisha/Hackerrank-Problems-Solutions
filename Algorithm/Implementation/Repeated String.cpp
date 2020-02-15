#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    cin>>s;

    ll n;
    cin>>n;

    ll cnt =0;

    for(ll i=0; i<s.size(); i++){
        if(s[i]=='a') 
            cnt++;
    }

    ll ans = (n/s.size())*cnt;

    for(ll i=0; i<(n%s.size()); i++){
        if(s[i]=='a') ans++;
    }

    cout<<ans<<endl;
    return 0;
}
