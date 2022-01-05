#include<bits/stdc++.h>
using namespace std;

void solve(string s)
{
    unordered_map<string,int>mp;
    for(int i=0; i<s.length(); i++) {
        for(int j=i; j<s.length(); j++){
            int len_substr = j-i;
            string str = s.substr(i,len_substr+1);
            sort(str.begin(),str.end());
            mp[str]++;
        }
    }
    int result = 0, cnt=0;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second > 1) {
            cnt = it->second;
            result = result + (cnt*(cnt-1))/2;
        }
    }
    cout << result << endl;
}

int main()
{
    int testcase;
    cin >> testcase;
    
    while(testcase--){
        string s;
        cin >> s;
        
        solve(s);
    }
}
