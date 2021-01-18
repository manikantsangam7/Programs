#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        int n;
        cin>>n>>s;
        int ch=120-n;
        for(int j=0;j<=n;j++)
        {
            if(s[j]=='1')
            ch++;
        }
        if(ch>=90)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;        
    }
    return 0;
}