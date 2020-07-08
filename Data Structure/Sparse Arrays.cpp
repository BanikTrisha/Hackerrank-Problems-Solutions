#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;

    int cnt = 0;
    vector<int>v;
    vector<string>str(n+1);

    for(int i=0; i<n; i++){
       cin >> str[i];
    }
    
    cin >> m;
     vector<string>qtr(m+1);
    for(int i=0; i<m; i++){
        cin >> qtr[i];
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(qtr[i] == str[j]){
                cnt++;
            }
        }
         v.push_back(cnt);
         cnt=0;
    }

    for(int i=0; i<v.size(); i++)
        cout << v[i] << endl;

    return 0;
    }
