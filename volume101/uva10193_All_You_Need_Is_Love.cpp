//All You Need Is Love
#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{   //以輾轉相除法實現最大公因數(GCD)
    return b==0 ? a : GCD(b,a%b);
}
int main()
{
    int T,cases=1;
    scanf("%d",&T);
    while(T--)
    {
        int n1=0,n2=0;
        string a,b;
        cin>>a>>b;
        //string_to_integer
        for(int i=0;i<a.length();i++)
        {
            int ia=a[i]-'0';
            n1+=ia*pow(2,a.length()-1-i);
        }
        for(int i=0;i<b.length();i++)
        {
            int ib=b[i]-'0';
            n2+=ib*pow(2,b.length()-1-i);
        }
        if(GCD(n1,n2)!=1)
            printf("Pair #%d: All you need is love!\n",cases++);
        else
            printf("Pair #%d: Love is not all you need!\n",cases++);
    }
    return 0;
}