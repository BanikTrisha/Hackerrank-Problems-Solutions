#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    int mn = (int)floor(sqrt(len));
    int mx = (int)ceil(sqrt(len));

    string str = "";

    for(int j=0; j<mx; j++){
        int temp = j;
        for(int i=temp; i<len; i+=mx){
            str += s[i];
        }
        str += " ";
    }
    cout << str << endl;

    return 0;
}
