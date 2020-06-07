#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll test;
    cin>>test;
    while(test--){
        ll n,cnt=0,remeinder;
        cin>>n;

        ll temp = n;

        while(n!=0){
            remeinder = n%10;
            if( remeinder!=0 && (temp%remeinder==0))cnt++;
            n = n/10;
        }
        cout<<cnt<<endl;
    }
}
