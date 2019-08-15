#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hr,min,sec;
    char c[3];
    scanf("%d:%d:%d%s",&hr,&min,&sec,c);
    
    if(strcmp(c,"PM")==0 && hr!=12)
    {
        hr+=12;
    }
    else if(strcmp(c,"AM")==0 && hr==12)
    {
        hr = 0;
    }
    printf("%02d:%02d:%02d\n",hr,min,sec);
    return 0;
}
