#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

void solve(string s)
{
    ll n;
    n = s.length();

    ll sum[n+2];
    for(ll i=0; i<n; i++){
        s[i] = s[i] - '0';
    }

    sum[0] = s[0];
    ll temp = sum[0];

    for(ll i=1; i<n; i++){
        sum[i] =( (i+1)*s[i] + 10*sum[i-1] ) % mod;
        temp+=sum[i];
    }
    cout << temp%mod << endl;
}

int main()
{
    string s;
    cin >> s;

    solve(s);
    return 0;
}
