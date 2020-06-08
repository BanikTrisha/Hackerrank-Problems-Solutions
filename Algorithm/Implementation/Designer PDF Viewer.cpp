#include<bits/stdc++.h>
using namespace std;

int main()
{
    int height[26],h=-1,len;
    string s;

    for(int i=0; i<26; i++)
        cin>>height[i];
    cin>>s;

    len = s.length();

    for(int i=0; i<len; i++){
        if(h < height[s[i]-'a']) 
            h = height[s[i]-'a'];
    }

    cout<<len*h<<endl;
}
