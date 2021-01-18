#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,v1,d2,v2,p,count=0;
    cin>>d1>>v1>>d2>>v2>>p;
    for(int i=1;i<=10000;i++)
    {
        if(d1<=i)
        count+=v1;
        if(d2<=i)
        count+=v2;
        if(count>=p)
        break;
    }
    cout<<i;
}