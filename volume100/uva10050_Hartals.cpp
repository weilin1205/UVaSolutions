//Hartals
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,D,P;
    cin>>T;
    while(T--)
    {
        cin>>D; //day
        cin>>P; //political party
        int h[105]; //各政黨罷會間隔天數
        //input
        for(int i=0;i<P;i++) cin>>h[i];
        //check
        int table[3655]={0},k; //calendar
        for(int i=0;i<P;i++) //從第一個政黨開始逐一處理
        {
            k=1;
            for(int j=h[i];j<=D;j=h[i]*k)
            {
                if(j%7!=6&&j%7!=0) //遇到每週六或七不計
                    table[j]=1;
                k++;
            }
        }
        //output
        int cnt=0;
        for(int i=1;i<=D;i++)
        {
            if(table[i]==1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}