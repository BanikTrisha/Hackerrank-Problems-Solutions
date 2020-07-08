#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    ll test;
    cin >> test;
    queue<ll>q;

    while(test--){
        ll cs;
        cin >> cs;
        if( cs == 1){
            ll temp;
            cin >> temp;

            q.push(temp);
        }
        else if(cs == 2){
            q.pop();
        }
        else
            cout << q.front() <<endl;
    }

    return 0;
}
