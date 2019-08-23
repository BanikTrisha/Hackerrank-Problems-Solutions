#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin>>n;

    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }   
    sort(arr,arr+n);

    n = n/2;

    cout<<arr[n]<<endl;
    return 0;
}
