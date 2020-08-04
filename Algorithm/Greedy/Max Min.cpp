#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll n,k;
    cin >> n >> k;

    ll arr[n+1];

    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    vector<ll>v;

    for(ll i=0; i<=n-k; i++){
        v.push_back(arr[i+k-1] - arr[i]);
    }

    ll mini = *min_element(v.begin(),v.end());
    cout << mini << endl;

    return 0;
}
