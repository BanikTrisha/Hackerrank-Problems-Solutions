#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    if(n <= 2) {
        cout << "-1" << endl;
        return ;
    }
    
    string str = "";
    for(ll i=n; i>=0; i-=5) {
        if(i%3 == 0 && (n-i)%5 == 0) {
            str = "";
            for(ll j=0; j<i; j++) {
                str+='5';
            }
            
            for(ll j=0; j<n-i; j++) {
                str +='3';
            }
            break;
        }
    }
    
    if(str.length() > 0) {
        cout << str << endl;
    }
    else{
        cout << "-1" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll test;
    cin >> test;
    
    while(test--){
        solve();
    }
}
