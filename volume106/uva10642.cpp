//Can You Solve It?
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,t=1;
    cin>>T;
    while(T--)
    {   //注意數字特別大，所以要用long long，不然數據溢出會算錯
        long long int x1,y1,x2,y2,step;
        //input
        cin>>y1>>x1>>y2>>x2;
        //check 重點在推導出公式
        long long int L1,L2; //location
        L1=(((x1+y1)*(x1+y1+1)/2)+y1);
        L2=(((x2+y2)*(x2+y2+1)/2)+y2);
        step=L2-L1;
        //output
        cout<<"Case "<<t<<": "<<step<<"\n";
        t++;
    }
    return 0;
}