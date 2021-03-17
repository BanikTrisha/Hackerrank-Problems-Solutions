#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    
    int a[n],b[m];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    
    int cnt=0;
    
    for(int i=1; i<=100; i++){
        bool is_a = true, is_b = true;
        for(int k=0; k<n; k++){
            if(i%a[k]!=0){
                is_a = false;
                break;
            }
        }
        
        for(int j=0; j<m; j++){
            if(b[j]%i!=0){
                is_b = false;
                break;
            }
        }
        
        if(is_a && is_b){
            cnt++;
        }
    }
    
    cout << cnt << endl;
}
