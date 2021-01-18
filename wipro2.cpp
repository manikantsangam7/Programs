#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main()
{
    string str,rev="";
    cin>>str;
    int l=(str.length())-1;
    for(int i=0;i<str.length();i++)
    {
        rev[i]=str[l];
        l--;
    }
    int ans=0;
    for(int j=0;j<str.length();j++)
    {
        if(str[j]==rev[j])
        ans++;
    }
    cout<<ans;
    return 0;
}