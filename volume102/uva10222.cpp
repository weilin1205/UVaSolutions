//Decode the Mad man
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s2;
    while(getline(cin,s2))
    {
        for(int i=0;i<s2.length();i++) 
        {   
            if(s2[i]>='A'&&s2[i]<='Z') 
                s2[i]=tolower(s2[i]); //將大寫char轉換為小寫char

            if(s2[i]==32||s2[i]==10) { //ASCII Code 32=空白(' '), 10=換行('\n')
                cout<<s2[i];}
            else { 
            //s1.find(s2[i])表示 在s1中去找 和s2[i]這個char_s2一樣的char_s1 返回他(char_s1)在s1的位置
                cout<<s1[s1.find(s2[i])-2];}
        }
        cout<<"\n";
    }
    return 0;
}