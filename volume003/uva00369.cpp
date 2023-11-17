//Combinations
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //dp遞迴建表
    long long int c[105][105]; //c[n][m]=k (在n個物品中取出m個的方法有k種)
    memset(c,0,sizeof(c)); //初始化為全0
    for(int i=1;i<=100;i++)
    {
        c[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            if(i==j) c[i][j]=1;
            /*
            若取第 n 物，則餘下 n-1 個中，要剛好取 m-1 個，加上第 n 個剛好；
            若不取第 n 物，則餘下 n-1 個中，要剛好取 m 個才會剛好。
                        取第 n 個     不取第 n 個
            dp[n][m] = dp[n-1][m-1] + dp[n-1][m]
            */
            else c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    //input
    int n,m;
    while((cin>>n>>m)&&!(n==0&m==0))
    {
        //output (讀入n,m，查表輸出)
        cout<<n<<" things taken "<<m<<" at a time is "<<c[n][m]<<" exactly.\n";
    }
    return 0;
}