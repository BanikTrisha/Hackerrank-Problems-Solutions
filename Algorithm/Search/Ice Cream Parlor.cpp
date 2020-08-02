#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        ll cost,m;
        cin >> cost >> m;

        ll arr[m+1];

        for(ll i=0; i<m; i++){
            cin >> arr[i];
        }

        bool flag = false;

        for(ll i=0; i<m; i++){
            for(ll j=0; j<m && i!=j; j++){
                if(arr[i] + arr[j] == cost){
                    flag = true;
                    cout << j+1 << " " << i+1 << endl;
                    break;
                }
            }
            if(flag == true){
                break;
            }
        }
    }

    return 0;
}
