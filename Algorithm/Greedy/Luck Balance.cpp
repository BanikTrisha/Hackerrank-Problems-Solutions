#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool compare_by(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    if(a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}
void solve()
{
    ll n,k;
    cin >> n >> k;
    
    ll l[n],t[n],mx_luck = 0;
    vector<pair<ll,ll> >v;
    
    for(ll i=0; i<n; i++) {
        cin >> l[i] >> t[i];
        if(t[i] == 1) {
            v.push_back({l[i],t[i]});
        }
        mx_luck += l[i];
    }
    sort(v.begin(),v.end(),compare_by);
    for(ll i=k; i<v.size(); i++) {
        mx_luck -= (v[i].first*2);
    }
    cout << mx_luck << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
