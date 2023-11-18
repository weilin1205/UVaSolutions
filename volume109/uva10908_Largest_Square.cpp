//Largest Square
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin>>T;
    while(T--)
    {
        int R,C,Q;
        cin>>R>>C>>Q;
        cout<<R<<" "<<C<<" "<<Q<<"\n";

        string table[150];
        for(int i=0;i<R;i++) {
            cin>>table[i]; }

        while(Q--)
        {
            int r,c,n=0,width=1;
            bool flag=true;
            cin>>r>>c;
            while(flag)
            {
                n++;
                for(int i=r-n;i<=r+n&&flag==true;i++)
                {   
                    for(int j=c-n;j<=c+n&&flag==true;j++)
                    {
                        if(i<0||j<0||i>=R||j>=C) flag=false; //邊界限制
                        else if(table[i][j]!=table[r][c]) flag=false; //當條件式if不成立，再來判斷else if是否成立
                    }
                }
                if(flag==true) width+=2;
            }
            cout<<width<<"\n";
        }
    }
    return 0;
}