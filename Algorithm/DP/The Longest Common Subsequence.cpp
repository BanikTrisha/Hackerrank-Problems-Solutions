#include<bits/stdc++.h>
#define maxC 1000
using namespace std;
int dp[maxC][maxC];

int lcs(int s1[], int s2[],int n, int m)
{
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
            if(i==0 || j==0){
                dp[i][j] = 0;
            }
            else if(s1[i-1]==s2[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[n][m];
}

void print_lcs(int s1[], int s2[], int length,int n, int m)
{
    vector<int>v(length);
    int i=n, j=m;
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            v[length-1] = s1[i-1] ;
            i--;
            j--;
            length--;
        }
        else if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
   
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    cout << endl;
}

int main()
{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);

    int n,m;
    cin >> n >> m;

    int a[n+1], b[m+1];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
    
    int length = lcs(a,b,n,m);
    //cout << length << endl;
    print_lcs(a,b,length,n,m);
    return 0;
}
