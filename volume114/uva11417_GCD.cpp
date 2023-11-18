//GCD
/*
輾轉相除法Example:
求x=15與y=12的GCD，先求兩者相除的餘數，再將x換成先前的y(12)，y則換成餘數
如果餘數不等於0再遞迴計算
//以輾轉相除法實現最大公因數(GCD)
int GCD(int x, int y)
{
    int temp = x % y;
    if (temp == 0)
        return y;
    else
        GCD(y, temp);
}
//以輾轉相除法實現最大公因數(GCD)，並以三元運算子精簡化表示
int GCD(int a,int b)
{
    return b==0 ? a : GCD(b,a%b);
}
*/

#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    return b==0 ? a : GCD(b,a%b);
}
int Gfunc(int N)
{
    int G=0,i,j;
    for(i=1;i<N;i++)
    {
        for(j=i+1;j<=N;j++)
        {
            G+=GCD(i,j);
        }
    }
    return G;
}
int main()
{
    int N;
    while(cin>>N&&N!=0)
    {
        cout<<Gfunc(N)<<endl;
    }
    return 0;
}