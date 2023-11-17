#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x[10001],num=1;
    while(cin>>x[num])
    {
        sort(x,x+num+1);
        if(num==1) cout<<x[1];
        else if(num%2!=0) cout<<x[(num/2)+1];   //num is odd
        else if(num%2==0) cout<<(x[num/2]+x[(num/2)+1])/2;  //num is even
        cout<<"\n";
        num++;
    }
    return 0;
}