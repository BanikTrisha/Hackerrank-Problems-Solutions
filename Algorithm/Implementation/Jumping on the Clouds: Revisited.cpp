#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    
    ll c[n],e=100;
    for(ll i=0; i<n; i++) cin >> c[i];
    
    ll curr = 0;
    do{
        e--;
        curr = (curr+k)%n;
        if(c[curr] == 1) e-=2;
    }
    while(curr!= 0);
    
    cout << e << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
