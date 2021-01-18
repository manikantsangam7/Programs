#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,power=0,sum=0,temp,sume=0,sumo=0;
    cin>>n;
    long long int check=n;
    while(check>0)
    {
        check/=10;
        power++;
    }
    check=n;
    while(check!=0)
    {
        temp=check%10;
        if(temp%2==0)
        sume+=temp;
        else
        {
            sumo+=temp;
        }
        
        sum+=pow(temp,power);
        check/=10;
    }
    check=n;
    if(sum==n)
        cout<<sume;
    else
    cout<<sumo;
    return 0;
}