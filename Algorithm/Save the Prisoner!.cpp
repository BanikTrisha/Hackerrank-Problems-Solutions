#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--){
        ll n,m,s;
        cin >> n >> m >> s;
        
        int temp = m+s-1;
        
        if(temp%n==0) cout << n << endl;
        else cout << temp%n << endl;
    }
}
