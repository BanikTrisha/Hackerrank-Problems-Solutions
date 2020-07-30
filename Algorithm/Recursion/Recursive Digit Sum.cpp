#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll solve(ll num)
{   
    ll rem = 0;
    if(num < 10)
        return num;
    else{
        while(num > 0){
            rem += num % 10;
            num/=10;
        }
    }
    return solve(rem);

}

int main()
{
    string s;
    cin >> s;
    ll k,num;
    cin >> k;

    for(ll i=0; i<s.length(); i++){
            num = num + s[i]-'0';
    }

    num *= k;

    cout << solve(num) <<endl;
    return 0;
}
