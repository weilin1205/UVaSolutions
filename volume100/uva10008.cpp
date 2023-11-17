//What’s Cryptanalysis?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,max=0;
    cin>>T;
    getchar(); //濾掉換行符
    int table[26]={0};
    while(T--)
    {
        string s;
        getline(cin,s);
        //Count the number of occurrences of each letter
        for(int i=0;i<=s.length();i++)
        {
            if('A'<=s[i]&&s[i]<='Z') {
                table[s[i]-'A']++;
                if(table[s[i]-'A']>max){
                    max=table[s[i]-'A'];}}
            if('a'<=s[i]&&s[i]<='z') {
                table[s[i]-'a']++;
                if(table[s[i]-'a']>max){
                    max=table[s[i]-'a'];}}
        }
    }
    //Output
    for(int j=max;j>=1;j--) { 
        for(int k=0;k<=25;k++) {
            if(table[k]==j) cout<<char(k+'A')<<" "<<j<<"\n";
        }
    }
    return 0;
}