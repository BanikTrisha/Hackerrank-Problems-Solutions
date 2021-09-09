#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll a[n];
    for(ll i=0; i<n; i++) cin >> a[i];
    
    ll jump = 0;
    for(ll i=0; i<n; i++) {
        if(a[i+1] == 0 && a[i+2] == 1) jump++;
        else if(a[i+1] == 0 && a[i+2] == 0) {
            jump++;
            i+=1;
        }
        
        else if(a[i+1] == 1 && a[i+2] == 0){
            jump++;
            i+=1;
        }
    }
    
    cout << jump << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
