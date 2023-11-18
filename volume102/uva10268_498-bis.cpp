//498-bis
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        long long int a[200000],f;
        int n,i;
        //intput
        for(n=0;;n++) {
            cin>>a[n];
            if(getchar()=='\n') break; }
        //calculate
        //f'(x)=((((A0*n)*x+A1*(n-1))*x+A2*(n-2))*)x+......+A[n-2]*2)*x+An-1*1
        f=a[0]*n;
        for(int i=1;i<n;i++)
        {  //每次乘上x後再加上下一項
            f=f*x+a[i]*(n-i);
        }
        //output
        cout<<f<<"\n";
    }
    return 0;
}