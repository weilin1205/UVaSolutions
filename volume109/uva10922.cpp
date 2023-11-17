//2 the 9s
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    while(cin>>n&&n!="0")
    {
        int sum=0;
        for(int i=0;i<n.length();i++)
        { //string位數和
            sum+=(n[i]-'0');
        }
        if(sum%9==0) {
            int d=1;
            while(sum%9==0&&sum!=9)
            { //integer位數和
                int k=sum;
                sum=0;
                while(k>0)
                {
                    sum+=k%10;
                    k/=10;
                }
                d++;
            }
            cout<<n<<" is a multiple of 9 and has 9-degree "<<d<<".\n";
        }
        else {
            cout<<n<<" is not a multiple of 9.\n";
        }
    }
    return 0;
}