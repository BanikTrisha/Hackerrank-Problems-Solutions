#include<bits/stdc++.h>
using namespace std;

int reversDigits(int num) 
{ 
    int rev_num = 0; 
    while (num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
   

int main()
{
    int start,end,divisor,cnt=0;
    cin>>start>>end>>divisor;

    for(int i=start; i<=end; i++)
    {
        if(abs(i - reversDigits(i))%divisor==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

