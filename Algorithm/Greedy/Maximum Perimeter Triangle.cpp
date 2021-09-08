#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll ar[n];
    for(ll i=0; i<n; i++) cin >> ar[i];
    
    sort(ar,ar+n);
    bool flag =false;
    
    ll mx_len=0, a=0,b=0,c=0;
    for(ll i=0; i<n-2; i++) {
        for(ll j=i+1; j<n-1; j++) {
            if((ar[i]*ar[i] + ar[j]*ar[j]) >= ar[j+1]*ar[j+1]) {
                flag = true;
                mx_len = max(mx_len , (ar[i]+ar[j]+ar[j+1]));
                a = ar[i], b = ar[j], c = ar[j+1];
            }
        }
    }
    
    if(flag == true){
        cout << a << " " << b << " " << c << endl;
    }
    else cout << "-1" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
