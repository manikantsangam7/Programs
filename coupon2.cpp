#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int d,c,a1,a2,a3,b1,b2,b3,tbc=0,tbwc=0,ta=0,tb=0;
        cin>>d>>c>>a1>>a2>>a3>>b1>>b2>>b3;
        ta=a1+a2+a3;
        tb=b1+b2+b3;
        if(ta>=150 && tb>=150)
        {
            tbc=ta+tb+c;
            tbwc=ta+tb+d+d;
        }
        else if((ta>=150 || tb>=150) && (ta<150 || tb<150))
        {
            tbc=ta+tb+c+d;
            tbwc=ta+tb+d+d;
        }
        
        if(tbc<tbwc)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}