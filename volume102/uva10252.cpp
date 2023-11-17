//Common Permutation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s;
    while(getline(cin,s1),getline(cin,s2))
    {   
        if(s1==" "||s2==" ") {
            cout<<" "<<endl;
            continue;}
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s2.length();j++)
            {
                if(s1[i]==s2[j]) {
                s=s+s1[i];
                s1.erase(i,1); //擦掉該字避免重複查找
                //刪除s1中下標為i的1個字符
                s2.erase(j,1); //擦掉該字避免重複查找
                //刪除s2中下標為j的1個字符
                /*原本的硬幹法
                s1[i]=-1;
                s2[j]=-2;
                */
                }
            }
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;
        s1.clear(),s2.clear(),s.clear();
    }
    return 0;
}