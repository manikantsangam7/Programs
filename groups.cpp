#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int ans=0;
        for(int i=0;i<str.length();i++)
        {
            if((str[i]=='1' && str[i+1]=='0') ||  (str[i]=='1' && (i==str.length()-1)))
            ans++;
        }
        cout<<ans<<endl;
    }
}