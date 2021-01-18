#include<bits/stdc++.h>
using namespace std;
void subString(string s, int n)  
{  
    int count=0;
    for (int i = 0; i < n; i++)
    {  
        for (int len = 1; len <= n - i; len++)
        { 
           string sub= s.substr(i, len);
           if(sub.size()>1)
           {
               if(sub[0]!=sub[n-1])
           {
               count++;
           }
           }
           else
           {
               continue;
           }
        }
    }
    cout<<count<<endl;
} 
int main()
{
    int t;
    cin>>t;
    for(int h=0;h<t;h++)
    {
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        subString(s,s.length());
    }
}