//Minesweeper
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T=1,r,c; //row,column
    while(cin>>r>>c)
    {
        if(r==0 && c==0) return 0;
        char table[150][150]={0}; //[row][column]
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>table[i][j]; //[row][column]
            }
        }

        //output
        if(T>=2) cout<<"\n";
        cout<<"Field #"<<T<<":\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(table[i][j]=='*') {
                    cout<<table[i][j]; }
                else
                {
                    int sum=0;
                    for(int y=i-1;y<=i+1;y++)
                    {
                        for(int x=j-1;x<=j+1;x++)
                        {
                            if(table[y][x]=='*') sum++;
                        }
                    }
                    cout<<sum;
                }
            }
            cout<<"\n";
        }
        T++;
    }
    return 0;
}