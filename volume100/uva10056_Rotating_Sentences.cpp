//Rotating Sentences
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        double p,q,ans=0;
        int n,i;
        cin>>n>>p>>i;
        q=1-p; //q是失敗的機率
        if(p==0){
            cout<<"0.0000"<<endl;}
        else {
            //推導使用的是等比級數和公式 Sn=(a1(1-r^n))/(1-r)，a1為首項，r為公比
            //本題的關鍵在於推導出以下公式
            ans=(pow((q),(i-1))*p)/(1-pow(q,n));
            //如果想要保留幾位小數，那setprecision就得與fixed合作了！！
            cout<<fixed<<setprecision(4)<<ans<<endl;}
    }
    return 0;
}