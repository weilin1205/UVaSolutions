//Square Numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        int sum=0;
        for(int i=a;i<=b;i++)
        {
            //如果一個數的平方根的平方等於該數，這說明此數是完全平方數
            /*注意要如下方分開打，
             *不可以if(sqrt(i)*sqrt(i)==i)，這樣會出錯
            */
            int sq=sqrt(i); //因為是整數型態，所以開根號後也是整數，所以再乘回來不一定會是原本的數 
            if(sq*sq==i)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}