#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p;
    cin>>n;
    cin>>p;
    int temp1,temp2;
    temp1 = p/2;
    if(n%2==0)
        temp2 = (n-p+1)/2;
    else
        temp2 = (n-p)/2;

    cout<<min(temp1,temp2)<<endl;
    return 0;
}
