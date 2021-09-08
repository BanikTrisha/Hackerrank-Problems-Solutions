#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    
    ll prices[n];
    for(ll i=0; i<n; i++) cin >> prices[i];
    sort(prices,prices+n);
    
    ll cnt=0,sum=0;
    for(ll i=0; i<n; i++) {
        sum += prices[i];
        if(sum <= k) cnt++;
        else break;
    }
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
