#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans = 0;
    int repeat_string = 1, special_substring = 1;
    
    //for repeat string
    for(int i=0; i<n; i++) {
        repeat_string = 1;
        while(i+1 < n && s[i] == s[i+1]){
            repeat_string++;
            i++;
        }
        ans = ans + (repeat_string*(repeat_string+1))/2;   
    }
    
    for(int i=0; i<n; i++) {
        special_substring = 1;
        while(i+special_substring < n && i-special_substring>=0 && s[i]!=s[i-1] && s[i-special_substring] == s[i+special_substring] && s[i-1] == s[i-special_substring]){
            special_substring++;
        }
        ans += special_substring-1;
    }
    
    cout << ans << endl;
}
