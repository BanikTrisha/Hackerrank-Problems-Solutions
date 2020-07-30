#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

void solve(ll arr[], ll n)
{
    vector<ll>mx_value;
    ll mx=0;
    for(ll i=0; i<n; i++){
        if(arr[i] > mx){
            mx = arr[i];
            mx_value.push_back(mx);
        }
    }

    ll len = mx_value.size();
    //cout << len << endl;

    if(len % 2==0){
        cout << "ANDY" << endl;
    }
    else cout << "BOB" << endl;
}

int main()
{
    ll test;
    cin >> test;

    while(test--){
        ll n;
        cin >> n;

        ll arr[n+1];

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }
        solve(arr,n);
    }
    return 0;
}
