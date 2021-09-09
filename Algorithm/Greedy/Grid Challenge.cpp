#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    string a[n];
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        sort(a[i].begin(),a[i].end());
    }
    bool flag = true;
    
    for(ll i=0; i<n; i++) {
        for(ll j=1; j<n; j++) {
            if(a[j-1][i] > a[j][i]) {
                flag = false;
                break;
            }
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
