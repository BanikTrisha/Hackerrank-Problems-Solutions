#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int height[n];
    for(int i=0; i<n; i++)
    {
        cin>>height[i];
    }
    int maxi = height[0];
    for(int i=1; i<n; i++)
    {
        if(maxi<height[i])
            maxi = height[i];
    }
    if(maxi>k)
        cout<<maxi-k<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}

