//Fibonaccimal Base
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,flag=0;
        int f[40]={0,1};
        cin>>n;
        cout<<n<<" = ";
        for(int i=2;i<40;i++)
        {   //建立費氏數列
            f[i]=f[i-1]+f[i-2];
        }
        for(int i=39;i>1;i--)
        {   //i=0 1|2 3 4 5
            //f=0 1|1 2 3 5
            //故i最小由2開始
            if(n>=f[i]) {
                n-=f[i];
                flag=1;
                cout<<"1";//找到第一個1之後才可以輸出0 
            }
            else if(flag==1) {
                cout<<"0";
            }
        }
        cout<<" (fib)"<<endl;
    }
    return 0;
}