#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool comp_by(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.second != b.second) {
        return a.second < b.second;
    }
    return a.first < b.first;
}

void solve()
{
    ll n;
    cin >> n;
    
    vector<pair<ll,ll> >v;
    ll total = 0;
    
    for(ll i=0; i<n; i++) {
        total = 0;
        ll order, prep;
        cin >> order >> prep;
        
        total+=(order+prep);
        v.push_back({i+1,total});
    }
    sort(v.begin(),v.end(),comp_by);
    for(ll i=0; i<v.size()-1; i++) {
        cout << v[i].first << " ";
    }
    cout << v[n-1].first << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
}
