#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    int len_s = s.length();
    int alphabet[26] = {0};
    
    //calculating character frequency
    for(int i=0; i<len_s; i++) {
        alphabet[s[i]-'a']++;
    }
    
    int mx=0, mn=1000000;
    
    //finding out max and min frequency
    for(int i=0; i<26; i++){
        if(alphabet[i] > mx ) mx = alphabet[i];
        if(alphabet[i] < mn && alphabet[i]!=0) mn = alphabet[i];
    }
    
    //calculate number of maximum and minimum frequency
    int num_max_freq=0, num_min_freq=0;
    for(int i=0; i<26; i++) {
        if(alphabet[i] == mx) num_max_freq++;
        if(alphabet[i] == mn) num_min_freq++;
    }
    
    //if there are more differences than max and min, then print 'NO'
    for(int i=0; i<26; i++) {
        if(alphabet[i]!=0){
            if(alphabet[i] == mx || alphabet[i] == mn){
                continue;
            }
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    
    //checking if they are all contain same frequency or not
    if(mx == mn) {
        cout << "YES" << endl;
    }
    
    else{
        if(abs(mx-mn) == 1){
            if(num_max_freq == 1 || num_min_freq == 1)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        else{
            if(mn == 1 && num_min_freq == 1) {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }  
    }
 }
