//Dangerous Dive
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i;
    while(cin>>n>>r)
    {
        int back[n+5]={0},id; //陣列初始化為0
        //input
        for(i=1;i<=r;i++) {
            cin>>id;
            back[id]=1;
        }
        //output
        if(n==r) {
            cout<<"*\n";}
        else {
            for(i=1;i<=n;i++){
                if(back[i]==0) cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}