#include <bits/stdc++.h>
using namespace std;
void solve(const int &num,const int &times)
{
    for(int i=1;i<=times;i++)
    {
        for(int j=1;j<=num;j++) {
            for(int k=1;k<=j;k++) cout<<j;
            cout<<"\n";
        }
        for(int j=num-1;j>0;j--) {
            for(int k=1;k<=j;k++) cout<<j;
            cout<<"\n";
        }
        if(i<times) cout<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        int num,times;
        cin>>num>>times;
        solve(num,times);
        if(T) cout<<"\n";
    }
    return 0;
}