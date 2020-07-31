#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int k;
    cin >> k;

    for(int i=0; i<=n; i++){
            if(s[i] >= 97 && s[i]<= 122){
                s[i] = (s[i]  - 'a' + k) % 26 + 'a';
            }
            else  if(s[i] >= 65 && s[i]<= 90){
                s[i] = (s[i] - 'A' + k) % 26 + 'A';
            }
    }

    cout << s << endl;
}
