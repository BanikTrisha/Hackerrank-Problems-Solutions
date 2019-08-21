#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    
    while(t--)
    {
        int n;
        cin>>n;
        int h=1;
        for(int i=1; i<=n; i++)
        {
            if(i%2!=0)
                h=h*2;
            if(i%2==0)
                h++;
        }

         cout<< h << endl;
    }
    
    return 0;
}
