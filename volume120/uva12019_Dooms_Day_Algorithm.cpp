//Doom’s Day Algorithm
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    //利用Sample Input的2011/1/6是星期四回推得知2011/1/1是星期六
    string M[8]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
    int D[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(T--)
    {
        int m,d,days=0;
        //input
        cin>>m>>d;
        //得知那天是一年中的第幾天
        days+=d;
        for(int i=1;i<m;i++) {
            days+=D[i]; }
        //output
        cout<<M[days%7]<<"\n";
    }
    return 0;
}