//Beat the Spread!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long  int s,d,a,b;
        cin>>s>>d; 
        a=(s+d)/2;
        b=(s-d)/2;
        if(((s+d)%2)||((s-d)%2)||(a<0)||(b<0)) {cout<<"impossible\n";}
        else {cout<<a<<" "<<b<<"\n";}
    }
    return 0;
}