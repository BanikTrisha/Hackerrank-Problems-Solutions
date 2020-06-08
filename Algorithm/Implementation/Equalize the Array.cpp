#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    ll n,maxx=0,total=0,value;
    cin>>n;
    ll arr[n+1],temp[101]={};
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
        temp[arr[i]]++;
        if(temp[arr[i]] > maxx) {
            maxx = temp[arr[i]];
            value = arr[i];
        }
    }

    for(ll i=1; i<=100; i++){
        if(i != value) total = total + temp[i];
    }

    cout<<total<<endl;
}
