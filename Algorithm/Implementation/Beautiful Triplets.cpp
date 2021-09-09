#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n,d;
    cin >> n >> d;
    
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    
    ll cnt_triplets = 0;
    for(ll i=0; i<n; i++) {
        for(ll j=1; j<n; j++) {
            if(a[j] - a[i] == d) {
                for(ll k=j+1; k<n; k++) {
                    if(a[j] - a[i] == a[k]-a[j] && (a[k]-a[j]) == d){
                        cnt_triplets++;
                    }
                }
            }
        }
    }
    
    cout << cnt_triplets << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
