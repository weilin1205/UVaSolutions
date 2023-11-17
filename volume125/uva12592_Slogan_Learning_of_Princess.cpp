#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,string> mp;
    int N,Q;
    while(cin>>N)
    {
        cin.ignore();
        string key,value;
        while(N--)
        {
            getline(cin,key);
            getline(cin,value);
            mp[key]=value;
        }
        cin>>Q;
        cin.ignore();
        while(Q--)
        {
            string ans;
            getline(cin,ans);
            cout<<mp[ans]<<"\n";
        }
        mp.clear();
    }
    return 0;
}