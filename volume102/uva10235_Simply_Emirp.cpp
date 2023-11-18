//Simply Emirp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int flag=1; //重置flag
        //確定為質數或合數
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) {
            flag=0;
            break;}
        }
        //質數進行第二階段判斷
        if(flag)
        {
            //翻轉n變成rev
            int temp=n,rev=0;
            while(temp>0)
            {
                rev=rev*10+temp%10;
                temp/=10;
            }
            //判斷翻轉後是否為同一個數
            int key=1;
            if(rev==n) {
                flag=1;
                key=0;}
            //判斷rev是否為質數
            for(int i=2;(i<=sqrt(rev))&&(key==1);i++)
            {
                if(rev%i==0) {
                    flag=1;
                    break;}
                else flag=2;
            }
        }
        if(flag==0)
            cout<<n<<" is not prime.\n";
        else if(flag==1)
            cout<<n<<" is prime.\n";
        else //flag==2
            cout<<n<<" is emirp.\n";
    }
    return 0;
}