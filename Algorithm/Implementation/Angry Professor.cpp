#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int students[n];
        int non_p=0, pos=0;
        for(int i=0; i<n; i++)
        {
            cin>>students[i];
            if(students[i]<=0)
                non_p++;
            else
                pos++;
        }
        if(non_p>=k)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;      
        
    }
    return 0;
}
