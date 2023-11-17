//Rotating Sentences
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='"'&&count==0) {
                cout<<"``";
                count=1;}
            else if(s[i]=='"'&&count==1) {
                cout<<"''";
                count=0;}
            else {
                cout<<s[i];}
        }
        cout<<endl;
    }
    return 0;
}