//Odd Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,cases=1;
    scanf("%d",&T);
    //cin>>T;
    while(T--)
    {
        int a,b,sum=0;
        scanf("%d %d",&a,&b);
        //cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2==1) sum+=i;
        }
        printf("Case %d: %d\n",cases++,sum);
        //cout<<"Case "<<cases<<": "<<sum<<endl;
        //cases++;
    }
    return 0;
}