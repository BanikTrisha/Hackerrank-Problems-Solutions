#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    
    sort(a,a+n);
    
    ll res = a[0];
    for(ll i=1; i<n; i++) 
        res ^= a[i];
        
    cout << res << endl;
}

int main()
{
    solve();
}
