#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=1; i<=n ; i++)
    {
        int temp;
        cin>>temp;
        arr[temp] = i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<arr[arr[i]]<<endl;
    }
    return 0;
}



