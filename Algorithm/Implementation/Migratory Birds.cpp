#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    int maxx = *max_element(v.begin(),v.end());

    vector<int>cnt(5,0);

    for(int i=0; i<v.size(); i++)
        cnt[v[i]]++;
    int temp=-1,type;
    for(int i=0; i<=maxx; i++){
        if(cnt[i] > temp){
            temp = cnt[i];
            type = i;
        }
    }

    cout<<type<<endl;
}
