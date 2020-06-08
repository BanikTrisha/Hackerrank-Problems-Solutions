#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp=2,cnt=2;
    cin>>n;

    for(int i=2; i<=n; i++){
        temp = temp * 3;
        temp = temp /2;
        cnt = cnt + temp;
    }
    cout<<cnt<<endl;
}
