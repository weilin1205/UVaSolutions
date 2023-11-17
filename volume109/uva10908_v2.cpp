#include <bits/stdc++.h>
using namespace std;
int main()
{
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
            char mid = table[r][c];
            while(flag)
            {
                n++;
                for(int i=r-n;i<=r+n&&flag==true;i++)
                {
                    for(int j=c-n;j<=c+n&&flag==true;j++)
                    {
                        if(i<0||j<0||r+n>=R||c+n>=C) //邊界限制
                        {
                            flag=false;
                        }
                        else
                        {
                            if(table[r-n][j]!=mid) flag=false; //上邊
                            if(table[r+n][j]!=mid) flag=false; //下邊
                            if(table[i][c-n]!=mid) flag=false; //左邊
                            if(table[i][c+n]!=mid) flag=false; //右邊
                        }
                    }
                }
                if(flag==true) width+=2;
            }
            
            cout<<width<<"\n";
        }
    }
    return 0;
}