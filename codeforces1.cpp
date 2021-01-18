#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int p,f,cnts,cntw,s,w;
        cin>>p>>f>>cnts>>cntw>>s>>w;
        int tp,tf,one=1,two=1;
        while(tp<=p)
        {
            tp=one*s+two*w;
            one++;
            two++;
            if(one>p)
            {
                one=cnts;
            }
            if(two>w)
            {
                two=cntw;
            }
        }
        one--;
        two--;
        int sum=one+two;
        int none=cnts-one;
        int ntwo=cntw-two;
        one=0;
        two=0;
        while(tf<=f)
        {
            tf=one*s+two*w;
            one++;
            two++;
            if(one>none)
            {
                one=none;
            }
            if(two>ntwo)
            {
                two=ntwo;
            }
        }
        sum+=one+two;
        cout<<sum<<endl;
    }
}