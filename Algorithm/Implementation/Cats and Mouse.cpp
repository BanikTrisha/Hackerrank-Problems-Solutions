#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;

        int temp1,temp2;
        temp1 = abs(z-x);
        temp2 = abs(z-y);

        if(temp1>temp2)
        {
            cout<<"Cat B"<<endl;
        }
        else if(temp1<temp2)
        {
            cout<<"Cat A"<<endl;
        }
        else{
            cout<<"Mouse C"<<endl;
        }
    }
    return 0;
}

