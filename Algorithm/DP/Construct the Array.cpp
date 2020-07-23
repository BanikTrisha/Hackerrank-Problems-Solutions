/*here is the simple tree for this problem sample input
                          1
                      /        \        ----> length 1
                    2          3
                  /   \       /      \     ------> length 2
                 1   3     1      2
                / \   / \    / \     / \     --------> length 3
               2  3 2 1  2 3  1  3               
               ^    ^    ^                        // here in the last line where the length is 3 ,there are 3 ways to build an array where first element is 1 & last element is 2,,i noted 2 as (^)
            
*/             

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int

ll solve(ll n, ll k, ll x)
{
    ll yes[n+1], no[n+1];

    if(x == 1) {
        yes[0] = 1;                         //base case                                     
        no[0] = 0;
    }
    else{
        yes[0] = 0;                         // base case
        no[0] = 1;      
    }

    for(ll i=1; i<n; i++){
            yes[i] = no[i-1] % mod;               
            no[i] = (yes[i-1]*(k-1) + no[i-1]*(k-2)) % mod;
    }

    return yes[n-1];
}

int main()
{
    ll n,k,x;
    cin >> n >> k >> x;

    ll ans = solve(n,k,x);
    cout << ans << endl;

    return 0;
}
