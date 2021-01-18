#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,sub="";
    int input2,sum=0;
    cin>>str>>input2;
    if(str.length()==0)
    {
    cout<<"NULL";
    exit(0);
    }
    if(input2==1)
    {
    for(int i=0;i<str.length();i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        sub+=str[i];
    }
    if(sub.length()==0)
    cout<<"0";
    else
    cout<<sub;    
    }
    else if(input2==0)
    {
        for(int i=0;i<str.length();i++)
        {
            if(isdigit(str[i]))
            sum+=str[i]-48;
        }
        cout<<sum;
    }
    return 0;
}