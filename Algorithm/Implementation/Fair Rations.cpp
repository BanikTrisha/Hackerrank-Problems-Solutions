#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll a[n],cnt_odd=0;
    for(ll i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]%2 == 1) cnt_odd++;
    }
    
    if(cnt_odd % 2 != 0) {
        cout << "NO" << endl;
    }
    
    else {
        ll cnt_l = 0;
        for(ll i=0; i<n-1; i++) {
            if(a[i]%2==1) {
                cnt_l+=2;
                a[i] += 1;
                a[i+1] += 1;
            }
        }
        cout << cnt_l << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
