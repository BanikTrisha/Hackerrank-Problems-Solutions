#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,c,m;
    cin >> n >> c >> m;
    
    n = n/c;
    ll total = n;
    
    while(n >= m) {
        total++;
        n = n - (m-1);
    }
    cout << total << endl;
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
