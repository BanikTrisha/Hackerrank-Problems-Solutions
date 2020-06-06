#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll solve(ll n, ll power, ll base, ll total)
{
    ll temp = (int)pow(base,power);

    if((total + temp) == n) return 1;
    else if(total>n || temp>n) return 0;
    else{
        return solve(n,power,base+1, (total+temp))+ solve(n,power,base+1,total);
    }
}

int main()
{
    ll n,power;
    cin>>n>>power;

    ll ans = solve(n,power,1,0);
    cout<<ans<<endl;
    return 0;
}
