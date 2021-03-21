#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        string str;
        cin>>str;
        int len=str.length(),i=0,sa=0,ba=0,num=0,sc=0;
        if(len>=10)
        {
           while(i<len)
           {
               if(str[i]>='a' && str[i]<='z')
               sa=1;
               else if(i!=0 && i!=len-1 && str[i]>='A' && str[i]<='Z')
               ba=1;
               else if(i!=0 && i!=len-1 && (str[i]=='@' || str[i]=='#' || str[i]=='&' || str[i]=='%' || str[i]=='?'))
               sc=1;
               else if(i!=0 && i!=len-1 && str[i]>='0' && str[i]<='9')
               num=1;
               i++;
           } 
           if(sa==1 && ba==1 && sc==1 && num==1)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}