#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(ll arr[], ll n, ll m)
{
    ll cnt[n+1];
    
    memset(cnt, 0, sizeof(cnt));
    cnt[0] = 1;
    for(ll i=0; i<m; i++){
        for(ll j=arr[i]; j<=n; j++){
            cnt[j] = cnt[j] + cnt[j - arr[i]];
        }
    }
    return cnt[n];
}

int main()
{
    ll n,m;
    cin>>n>>m;

    ll arr[m+1];

    for(ll i=0; i<m; i++){
        cin>>arr[i];
    }

    cout<<solve(arr, n, m)<<endl;
    return 0;
}
