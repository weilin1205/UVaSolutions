//The Hotel with Infinite Rooms
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int S,D;
    while(cin>>S>>D)
    {
        //使用逆減法
        while(D!=0)
        {
            D-=S;
            if(D<=0) {
                cout<<S<<endl;
                break;}
            else {
                S++;}
        }
    }
    return 0;
}