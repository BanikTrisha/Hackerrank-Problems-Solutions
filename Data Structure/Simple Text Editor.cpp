#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    string s = "";
    string str;
    stack<string>q;

    while(test--){
        int cs;
        cin >> cs;

        if(cs == 1){
            q.push(s); 
            cin >> str;

            s = s + str;
        }

        else if ( cs == 2){
            q.push(s);
            int x;
            cin >> x;
            s = s.substr(0, s.length()-x);
        }

        else if(cs == 3){
            int x;
            cin >> x;
            cout << s[x-1]<<endl;
        }

        else{
            s = q.top();
            q.pop();
        }
    }

    return 0;
}
