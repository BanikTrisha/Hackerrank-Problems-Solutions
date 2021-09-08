#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,k;
    cin >> n >> k;
    
    vector<ll>a(n),b(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    for(ll i=0; i<n; i++) cin >> b[i];
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<int>());
    
    bool flag = true;
    for(ll i=0; i<n; i++) {
        if(a[i] + b[i] < k) {
            flag = false;
            break;
        } 
    }
    
    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll test;
    cin >> test;
    
    while(test--){
        solve();
    }
}
