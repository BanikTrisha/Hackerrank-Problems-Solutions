#include<bits/stdc++.h>
using namespace std;

bool ParenthesesBalance(string str)
{
    stack<char>s;

    for(int i=0; i<(int)str.length(); i++)
    {
        if(str[i]=='(' || str[i]=='[' || str[i]=='{')
        {
            s.push(str[i]); //open bracket push into the stack
            continue;
        }
        
        if(s.empty())   //stack is empty because no opening bracket found in current character 
            return false;
        
        if(str[i]=='(' && s.top()!=')')   // brackets don't match
            return false;
        if(str[i]=='[' && s.top()!=']')   //brackets don't match
            return false;
        if(str[i]=='{' && s.top()!='}')   //brackets don't match
            return false;
        if(str[i]==']' && s.top()=='(')
            return false;
        if(str[i]==')' && s.top()=='[')
            return false;
        if(str[i]==')' && s.top()=='{')
            return false;
        if(str[i]=='{' && s.top()==']')
            return false;
        if(str[i]=='{'&& s.top()==')')
            return false;

        s.pop();  
    }
    if(s.empty())
        return true;
    return false;
}

int main()
{
    string str;
    int n;
    cin >> n;
    while(n--)
    {
        cin>>str;
        if(ParenthesesBalance(str)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

