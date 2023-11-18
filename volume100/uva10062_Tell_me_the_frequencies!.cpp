//Tell me the frequencies!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag=0;
    //input
    while(getline(cin,s))
    {
        int table[256]={0};
        for(int i=0;i<s.length();i++){
            table[s[i]]++;}
        //output
        if(flag) cout<<"\n";
        //頻率由小而大排列，遇到相同頻率者，ASCII大者靠前
        for(int i=1;i<=s.length();i++)
        {
            for(int j=127;j>=32;j--)
            {
                if(table[j]==i)
                    cout<<j<<" "<<i<<"\n";
            }
        }
        flag=1;
    }
    return 0;
}