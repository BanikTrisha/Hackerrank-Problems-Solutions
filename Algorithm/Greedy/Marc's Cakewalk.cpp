#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    ll temp=0;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<n; i++){
        temp = temp + (v[i]*pow(2,i));
    }
     cout<<temp<<endl;
} 

int main()
{
    solve();
    return 0;
}

