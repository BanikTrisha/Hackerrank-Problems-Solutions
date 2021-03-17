#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    vector<int>v(n);
    vector<int>vec;
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    vec = v;
    sort(vec.begin(),vec.end());
    
    vector<int>diff;
    for(int i=0; i<n; i++){
        if(v[i]!=vec[i]) diff.push_back(i);
    }
    
    if(diff.size() == 0) cout << "yes" << endl;
    else if(diff.size() == 2) {
        cout << "yes" << endl;
        cout << "swap " << diff[0]+1 << " " << diff[1]+1 << endl;
    }
    else{
        int start = diff[0];
        int end = diff[diff.size()-1];
        
        while(start<end){
            swap(v[start],v[end]);
            start++,end--;
        }
        
        for(int i=0; i<n; i++){
            if(v[i]!=vec[i]) {
                cout << "no" << endl;
                return 0;
            }
        }
        
        cout << "yes\n" << "reverse " << diff[0]+1 << " " << diff[diff.size()-1]+1 << endl;
    }
    
}
