#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        int len;
        len=str.length();
        if(len>10)
        {
            int num=len-2;
            cout<<str[0]<<num<<str[len-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
        
    }
    
}