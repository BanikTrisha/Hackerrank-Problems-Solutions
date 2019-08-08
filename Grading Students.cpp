#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int grades[n];
    vector<int> new_grades;
    for(int i=0; i<n; i++)
    {
        cin>>grades[i];
        if(grades[i]<38)
        {
            new_grades.push_back(grades[i]);
        }
        else if(grades[i]>=38)
        {
            if((grades[i]%10==3) || (grades[i]%10==8))
            {
                new_grades.push_back(grades[i]+2);
            }
            else if((grades[i]%10==4) || (grades[i]%10==9))
            {
                new_grades.push_back(grades[i]+1);
            }
            else if(grades[i]%5==0)
            {
                new_grades.push_back(grades[i]+0);
            }
            else 
            {
                 new_grades.push_back(grades[i]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<new_grades[i] <<"\n";
    }
    cout<<endl;
    return 0;
}


