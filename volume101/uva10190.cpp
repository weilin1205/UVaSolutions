//Divide, But Not Quite Conquer!
#include <bits/stdc++.h>
using namespace std;
int cal(int n,int a)
{
    if(n==0||a==0||n==1||a==1) return 0;
    if(n<a) return 0;
    while(n>1)
    {
        if(n%a==0&&n%a<n)
            n/=a;
        else
            return 0;
    }
    return 1;
}
int main()
{
    int n,a,flag;
    while(cin>>n>>a)
    {
        flag=cal(n,a);
        if(flag==1)
        {
            cout<<n;
            while(n>1)
            {
                n/=a;
                cout<<" "<<n;
            }
            cout<<"\n";
        }
        else {
            cout<<"Boring!\n";}
    }
    return 0;
}