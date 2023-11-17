//You can say 11
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(cin>>n&&n!="0")
    {
        int odd=0,even=0;
        for (int i=0;i<n.length();i++)
        {
            if(i%2==1)
                odd+=(n[i]-'0');
            if(i%2==0)
                even+=(n[i]-'0');
        }

        string var;
        var=abs(odd-even)%11==0 ? "" : " not";
        /* 上面為使用三元運算子精簡化改寫後的樣子
        // var=條件式 ? 條件式為true時執行的陳述句 : 條件式為false時執行的陳述句
        if(abs(odd-even)%11==0) 
            var="";
        else 
            var=" not";
        */
        cout<<n<<" is"<<var<<" a multiple of 11."<<endl;
    }
    return 0;
}
