#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll l,r;
    cin >> l >> r;
    
    ll max_or = 0;
    for(ll i=l; i<=r; i++) {
        ll curr_or = 0;
        for(ll j=i; j<=r; j++) {
            curr_or = i^j;
            max_or = max(max_or , curr_or);
        }
    }
    cout << max_or << endl;
}

int main()
{
    solve();
}
