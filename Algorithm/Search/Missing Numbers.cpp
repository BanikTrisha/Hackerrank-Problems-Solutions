#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n ;

    int cnt_a[1000020] = {0};
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        cnt_a[a] ++;
    }

    cin >> m;
    vector<int>v;
    bool vis[m+3] = {};
    int cnt_b[1000020] = {0};
    for(int i=0; i<m; i++){
        int b;
        cin >> b;
        cnt_b[b]++;
        if(vis[b] == false){
            v.push_back(b);
            vis[b] = true;
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        if(cnt_a[v[i]] != cnt_b[v[i]]){
            //cout << cnt_a[v[i]] << endl;
            //cout << cnt_b[v[i]] << endl;
            cout << v[i] << " ";
        }
    }

    cout << endl;
}
