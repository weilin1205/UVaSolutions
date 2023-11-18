//Mutant Flatworld Explorers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,x,y,i,j,k;
    int d[5]={0,1,2,3},id; //id=integer direction
    char c[5]={'N','E','S','W'},cd;
    cin>>X>>Y; //設置世界邊界座標
    int table[X+1][Y+1]={}; //一開始全部都標上0，以後機器人掉落處會被標上1
    while(cin>>x>>y>>cd) //機器人初始座標與面對方向
    {
        cin.ignore();
        //確認方向代號 (NESW==0123)
        for(k=0;k<4;k++) {
            if(cd==c[k]) id=d[k];
        }
        //輸入指令
        string cmd;
        cin>>cmd;
        //處理指令
        int flag=1;
        for(j=0;j<cmd.length();j++)
        {
            if(cmd[j]=='F') //若為輸入前進指令
            {
                if(id==0) {
                    if(y==Y) { //已經站在邊界Y
                        if(table[x][y]==0) { //未曾有機器人掉落過
                            table[x][y]=1;
                            flag=0;
                            break;}
                    }
                    else y++;
                }
                else if(id==1) {
                    if(x==X) { //已經站在邊界X
                        if(table[x][y]==0) { //未曾有機器人掉落過
                            table[x][y]=1;
                            flag=0;
                            break;}
                    }
                    else x++;
                } 
                else if(id==2) {
                    if(y==0) { //已經站在邊界y=0
                        if(table[x][y]==0) { //未曾有機器人掉落過
                            table[x][y]=1;
                            flag=0;
                            break;}
                    }
                    else y--;
                } 
                else {
                    if(x==0) { //已經站在邊界x=0
                        if(table[x][y]==0) { //未曾有機器人掉落過
                            table[x][y]=1;
                            flag=0;
                            break;}
                    }
                    else x--;
                } 
            }
            else //輸入轉向指令
            {
                if(cmd[j]=='R') {
                    if(id==0) id++;
                    else if(id==1) id++;
                    else if(id==2) id++;
                    else id=0; }
                else if(cmd[j]=='L') {
                    if(id==0) id=3;
                    else if(id==1) id--;
                    else if(id==2) id--;
                    else id--; }
            }
        }
        if(flag==0)
            cout<<x<<" "<<y<<" "<<c[id]<<" LOST\n";
        else
            cout<<x<<" "<<y<<" "<<c[id]<<"\n";
    }
    return 0;
}