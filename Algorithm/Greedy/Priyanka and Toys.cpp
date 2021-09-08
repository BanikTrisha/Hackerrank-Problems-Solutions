#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll w[n];
    for(ll i=0; i<n; i++) cin >> w[i];
    sort(w,w+n);
    
    ll cnt = 1,temp = w[0];
    for(ll i=1; i<n; i++) {
        if(w[i] - temp > 4) {
            temp = w[i];
            cnt++;
        } 
    }
    
    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
