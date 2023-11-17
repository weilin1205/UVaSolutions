//Counting
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //dp遞迴建表
    int dp[1005][106]; //dp[n][大數運算用]=k 表示寫出數字n的方式有k種
    memset(dp,0,sizeof(dp)); //初始化為全0
    dp[1][0]=2; dp[2][0]=5; dp[3][0]=13;
    for(int i=4;i<=1000;i++)
    {
        for(int j=0;j<=105;j++)
        {
            dp[i][j]=dp[i-1][j]+dp[i-2][j]+dp[i-3][j]+dp[i-1][j];
        }
        //大數運算
        for(int j=0;j<=105;j++)
        {
            if(dp[i][j]>9999) {
                dp[i][j+1]+=dp[i][j]/10000;
                dp[i][j]%=10000;
            }
        }
    }
    //input
    int n,k;
    while(cin>>n)
    {
        //output
        k = 105;
		while (!dp[n][k] && k) k--;
		cout<<dp[n][k--]; //
		while (k >= 0)
			printf("%04d",dp[n][k --]); //靠左對齊，寬度為4，缺空處補0
		puts(""); 
    }
    return 0;
}