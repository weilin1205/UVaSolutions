//Rotating Sentences
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[101];
    int k=0,maxlen=0;
    while(getline(cin,s[k]))
    {
        if(s[k].length()>maxlen)
            maxlen=s[k].length();
        k++;
    }
    //output
    for(int i=0;i<maxlen;i++)
    {
        for(int j=k-1;j>=0;j--)
        {
            s[j].length()>i ? cout<<s[j][i] : cout<<" ";
            //因為i到後面一定會比j大(i會一直到最大長度)，
            //所以如果當s[j]長度比i大時輸出該s[j][i]的數，比i小的時候便輸出空格
        }
        cout<<"\n";
    }
    return 0;
}
/* 簡單實例
i=0 powerful
i=1 happy
i=2 friday
i=3 sun
i=4 beautiful
             b s f h p
             e u r a o
             a n i p w
             u   d p e
             t   a y r
             i   y   f
             f       u
             u       l
             l

      ( i =  4 3 2 1 0 )
*/