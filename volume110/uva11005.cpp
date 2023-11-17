//Cheapest Base
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T1,T2,X=1; 
    cin>>T1; //輸入測資數量
    while(X<=T1)
    {
        cout<<"Case "<<X<<":\n";

        //先記錄每個字的油墨成本
        int cost[36];
        for(int i=0;i<36;i++) {
            cin>>cost[i]; } //(0~35 共有36個數)

        cin>>T2; //輸入數字數量
        while(T2--)
        {
            int Y;
            cin>>Y; //輸入數字

            //逐一計算各個base的打印成本
            int r,min=0;
            int table[40]={0};
            for(int i=2;i<=36;i++) //利用短除法做十進制轉任意進制
            {

                int a=Y,sum=0;
                while (a!=0) //利用短除法做十進制轉任意進制
                {
                    r=a%i; //得到的餘數就是要轉的結果
                    /*(完整結果是最後要做整個數列的倒轉，
                    但在此只需要得到該進制的所有數字即可，所以不用倒轉)*/
                    sum+=cost[r];
                    a/=i;
                }
                if(min==0||sum<=min) //記錄最小花費
                {
                    table[i]=sum;
                    min=sum;
                }
            }
            
            cout<<"Cheapest base(s) for number "<<Y<<":";
            for(int i=2;i<=36;i++)
            {
                if(table[i]==min) //輸出花費最少的進制
                {
                    cout<<" "<<i;
                }
            }
            cout<<"\n";
        }
        if(X<T1){
            cout<<"\n";}
        X++;
    }
    return 0;
}