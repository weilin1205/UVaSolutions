//Funny Encryption Method
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n,b1=0,b2=0;
        cin>>n;
        int a1=n,a2=n,temp;
        //把n當10進位，轉成2進位，做出b1
        while(a1!=0)
        {
            if(a1%2==1) b1++;
            a1/=2;
        }
        //把n當16進位，轉成2進位，做出b2
        while(a2!=0)
        {
            temp=a2%10;
            while(temp!=0)
            {
                if(temp%2==1) b2++;
                temp/=2;
            }
            a2/=10;
        }
        cout<<b1<<" "<<b2<<endl;
    }
    return 0;
}