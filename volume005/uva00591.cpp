//Box of Bricks
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cases=1;
    while(cin>>n&&n!=0)
    {
        //input
        int h[n+5],sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            sum+=h[i];
        }
        //calculate
        int avg=sum/n; //average
        int k=0; //answer
        for(int i=0;i<n;i++)
        {  //僅搬動大於avg的堆
            if(h[i]>avg)
                k+=h[i]-avg;
        }
        //output
        cout<<"Set #"<<cases<<"\n";
        cout<<"The minimum number of moves is "<<k<<".\n\n";
        cases++;
    }
    return 0;
}