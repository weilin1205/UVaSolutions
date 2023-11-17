//Back to High School Physics
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //真．純物理題
    //一粒子做等加速度運動
    //輸入粒子經過 t 秒後的速度為 v，求 2t 秒後的位移量
    /*
    加速度:a 時間:t 初速度:v0
    令 v = v0 + a*t
    2t後的距離為: v0*t+(a*t^2)/2 = 2t*(v0+a*t) = 2*v*t
    */
    int v,t;
    while(cin>>v>>t)
    {
        cout<<2*v*t<<endl;
    }
    return 0;
}