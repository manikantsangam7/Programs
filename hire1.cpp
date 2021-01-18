#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int d,c,sum=0;
        string str;
        cin>>d>>str;
        transform(str.begin(),str.end(),str.begin(), ::tolower);
        if(str=="january")
        c=1;
        else if(str=="february")
        c=2;
        else if(str=="march")
        c=3;
        else if(str=="april")
        c=4;
        else if(str=="may")
        c=5;
        else if(str=="june")
        c=6;
        else if(str=="july")
        c=7;
        else if(str=="august")
        c=8;
        else if(str=="september")
        c=9;
        else if(str=="october")
        c=10;
        else if(str=="november")
        c=11;
        else if(str=="december")
        c=12;
        switch (c)
        {
        case 1 : sum+=d;
        break;
        case 2: sum=31+d;
        break;
        case 3: sum=60+d;
        break;
        case 4: sum=91+d;
        break;
        case 5: sum=121+d;
        break;
        case 6: sum=152+d;
        break;
        case 7: sum=182+d;
        break;
        case 8: sum=213+d;
        break;
        case 9: sum=244+d;
        break;
        case 10: sum=274+d;
        break;
        case 11: sum=305+d;
        break;
        case 12: sum=335+d;
        break;
        default:
            break;
        }
        int calc;
        calc=(sum+183)%366;
        if(calc>=1 && calc<=31)
        cout<<calc<<" january"<<endl;

        else if(calc>=32 && calc<=60)
        cout<<calc-31<<" february"<<endl;

        else if(calc>=61 && calc<=91)
        cout<<calc-60<<" march"<<endl;

        else if(calc>=92 && calc<=121)
        cout<<calc-91<<" april"<<endl;

        else if(calc>=122 && calc<=152)
        cout<<calc-121<<" may"<<endl;

        else if(calc>=153 && calc<=182)
        cout<<calc-152<<" june"<<endl;

        else if(calc>=183 && calc<=213)
        cout<<calc-182<<" july"<<endl;

        else if(calc>=214 && calc<=244)
        cout<<calc-213<<" august"<<endl;

        else if(calc>=245 && calc<=274)
        cout<<calc-244<<" september"<<endl;

        else if(calc>=275 && calc<=305)
        cout<<calc-274<<" october"<<endl;

        else if(calc>=306 && calc<=335)
        cout<<calc-305<<" november"<<endl;

        else if(calc>=336 && calc<=366)
        cout<<calc-335<<" december"<<endl;  
    }
}
