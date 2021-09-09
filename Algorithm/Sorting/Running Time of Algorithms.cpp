#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll insertion_sort(ll n, ll arr[])
{
    ll cnt_shift = 0;
    for(ll i=1; i<n; i++){
        ll key = arr[i];
        ll j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
            cnt_shift++;
        }
        arr[j+1] = key;
    }
    
    return cnt_shift;
}

void solve()
{
    ll n;
    cin >> n;
    
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    ll ans = insertion_sort(n,a);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
