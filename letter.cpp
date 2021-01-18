#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    map<char,int> mp;
    for(int i=0;i<str.length();i++)
    {
        char ch=str.at(i);
        if((ch>=65 && ch<=90 ) || (ch>=97 && ch<=122))
        {
            mp[ch]++;
        }
    }
    for(auto it=mp.begin();it!=mp.cend();++it)
    {
        cout<<(*it).first<<":"<<(*it).second<<endl;
    }
    return 0;
}