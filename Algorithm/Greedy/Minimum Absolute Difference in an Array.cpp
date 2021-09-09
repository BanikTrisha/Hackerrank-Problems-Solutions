#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll num[n];
    for(ll i=0; i<n; i++) cin >> num[i];
    
    ll mn = INT_MAX;
    
    sort(num,num+n);
    for(ll i=0; i<n-1; i++) {
        ll temp = abs(num[i]-num[i+1]);
        mn = min(mn,temp);
    }
    cout << mn << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
