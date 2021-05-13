#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll cnt = 0;
    while(n > 0) {
        if((n&1) == 0) {
            cnt++;
        }
        n = n >> 1;
    }
    ll ans = pow(2,cnt);
    cout << ans << endl;
}

int main()
{
    solve();
}
