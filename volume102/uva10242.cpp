//Fourth Point !!
/*先備知識
//平行四邊形的對角線座標相加，會等於另一條對角線相加 A(x,y)+C(x,y)=B(x,y)+D(x,y)
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
    {
        if(x1==x3&&y1==y3) //1,3為同一個點
        cout<<fixed<<setprecision(3)<<(x2+x4)-x1<<" "<<(y2+y4)-y1<<"\n";
        else if(x1==x4&&y1==y4) //1,4為同一個點
        cout<<fixed<<setprecision(3)<<(x2+x3)-x1<<" "<<(y2+y3)-y1<<"\n";
        else if(x2==x3&&y2==y3) //2,3為同一個點
        cout<<fixed<<setprecision(3)<<(x1+x4)-x2<<" "<<(y1+y4)-y2<<"\n";
        else //2,4為同一個點
        cout<<fixed<<setprecision(3)<<(x1+x3)-x2<<" "<<(y1+y3)-y2<<"\n";
    }
    return 0;
}