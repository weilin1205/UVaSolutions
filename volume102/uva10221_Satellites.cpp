//Satellites
#include <bits/stdc++.h>
using namespace std;
/* 解題先備知識
//一個完整的圓的弧度是2π，所以2π rad=360°，π rad=180°
//故 1°=π/180 rad
//[弧長]=[rθ(θ為弧度)]=[r(πθ/180)(θ為角度)]
//餘弦定理：c^2=a^2+b^2-2*a*b*cosθ
//[弦長]=[sqrt(a^2+b^2-2*a*b*cosθ)(θ為弧度)]
*/
int main()
{
    double s,a,pi=3.14159265359;
    string str;
    while(cin>>s>>a>>str)
    {
        double R=s+6440;
        if(str=="min") //把min換成deg
            a/=60; // 1 deg = 60 min
        while(a>=360) //超過360度(含)要換成小的同位角
        {
            a-=360;
        }
        if(a>180) //超過180度(不含)要換成互補角
            a=360-a;

        //output
        cout<<fixed<<setprecision(6)<<R*((a*pi)/180)<<" "<<sqrt(R*R+R*R-2*R*R*cos((a*pi)/180))<<endl;
        //輸出小數的話用printf 比較好寫
        //double x;
        //printf("%.nlf",x);
        //這樣就可以輸出小數點後n位了。=)
    }
    return 0;
}