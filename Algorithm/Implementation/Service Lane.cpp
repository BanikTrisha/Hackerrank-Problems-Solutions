#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,m;
    cin >> n >> m;
    
    ll w[n];
    for(ll i=0; i<n; i++) cin >> w[i];
    
    for(ll i=0; i<m; i++) {
        ll start,end;
        cin >> start >> end;
        
        ll mn = INT_MAX;
        for(ll i=start; i<=end; i++) {
            mn = min(mn,w[i]);
        }
        cout << mn << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
