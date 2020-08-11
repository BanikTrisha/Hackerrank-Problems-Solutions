#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        vector<int>nums(n);
        vector<int>v;

        for(int i=0; i<n; i++){
            cin >> nums[i];
            if(nums[i] > 0) v.push_back(nums[i]);
        }

        int maxx  = nums[0] , s=0;
        int sum = nums[0];
            
        for(int i=1; i<nums.size(); i++){
            sum = max (nums[i] , sum+nums[i]);
            maxx = max (maxx , sum);
        }
        for(int i=0; i<v.size(); i++){
            s += v[i];
        }
        if(maxx > s || maxx < 0) cout << maxx << " " << maxx << endl;
        else   cout << maxx << " " << s << endl;

    }
}
