//Train Swapping
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,L;
    cin>>T;
    while(T--)
    {
        cin>>L;
        //input
        int A[50]={0};
        for(int i=0;i<L;i++)
        {
            cin>>A[i];
        }
        int cnt=0;
        //逆序數對
        for(int i=0;i<L;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(A[i]<A[j])
                {
                    cnt++;
                }
            }
        }
        /* 
        //bubble sort
        int cnt = 0;
        for(i=0;i<n;i++ )
            for( j=0;j<n-1;j++ )
                if( train[ j ] > train[ j+1 ] )
                {
                    tmp = train[ j ];
                    train[ j ] = train[ j+1 ];
                    train[ j+1 ] = tmp;
                    cnt++;
                }
        */

        //output
        cout<<"Optimal train swapping takes "<<cnt<<" swaps.\n";
    }
    return 0;
}