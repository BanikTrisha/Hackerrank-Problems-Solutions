#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll num = pow(2,32) - 1;
    cout << num - n << endl;
}

int main()
{
    ll test;
    cin >> test;
    
    while(test--) {
        solve();
    }
}
