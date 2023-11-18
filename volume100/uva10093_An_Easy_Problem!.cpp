//An Easy Problem!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {   
        int k=0,sum=0,max=1,N;
        for(int i=0;i<s.length();i++)
        {
            if('0'<=s[i]&&s[i]<='9') {// (char)0~9 換成 (int)0~9
                k=s[i]-'0';}
            //  s[i]=s[i]-48; // 0的ASCII Code為48
            if('A'<=s[i]&&s[i]<='Z') {// A~Z 換成 10~35
                k=s[i]-'A'+10;}
            //  s[i]=s[i]-55; // A的ASCII Code為65
            if('a'<=s[i]&&s[i]<='z') {// a~z 換成 36~61
                k=s[i]-'a'+36;}
            //  s[i]=s[i]-61; // a的ASCII Code為97
            sum+=k;
            if(k>max)
                max=k;
        }
        // 開始找N是多少
        for(N=max+1;N<=62;N++)
        {
            if(sum%(N-1)==0) break;
        }
        if(N<=62) 
            cout<<N<<endl;
        else 
            cout<<"such number is impossible!"<<endl;
    }
    return 0;
}