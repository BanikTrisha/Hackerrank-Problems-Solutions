#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    
    int cnt=0;
    for(int i=0; i<n; i++){
        while(arr[i] != i+1) {
            int num = arr[i];
            swap(arr[i],arr[num-1]);
            cnt++;
        }
    }
    
    cout << cnt << endl;
    return 0;
}
