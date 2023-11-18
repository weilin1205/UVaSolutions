#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0&&b==0) break;
        int sqrt_a=ceil(sqrt(a));
        int sqrt_b=floor(sqrt(b));
        cout<<sqrt_b-sqrt_a+1<<endl;
    }
    return 0;
}