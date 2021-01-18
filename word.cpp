#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,sub="";
    char ch;
    getline(cin,str);
    map<string,int> mp;
    for(int i=0;i<str.length();i++)
    {
        char ch=str.at(i);
       if(ch==' ' || ch==',' || ch=='!' || ch=='?' || ch=='.')
       {
           mp[sub]++;
           sub="";
       }
       else
       {
           sub+=str.at(i);           
       } 
    }
    for(auto it=mp.begin();it!=mp.cend();++it)
    {
        cout<<(*it).first<<":"<<(*it).second<<endl;
    }
    return 0;
}
/*This network is marked as a "hidden" network and is either not in range of this computer or the wireless settings saved on this computer do not match the settings of the network.
Profile: Redmi 6
    SSID: Redmi 6
    SSID length: 7
    Connection mode: Infra
    Security: Yes
    Set by group policy: No
    Connect even if network is not broadcasting: No
    Connectable: No
     Reason: 0x00028003   */