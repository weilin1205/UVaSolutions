//Die Game
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string cmd;
    while(cin>>n)
    {  //起始面：上1,下6,北2,南5,西3,東4
        int top=1,bottom=6;
        int north=2,south=5;
        int west=3,east=4;
        if(n==0) break;
        for(int i=0;i<n;i++)
        {
            cin>>cmd;
            if(cmd=="north") { //向北轉，東西面不會動到
                swap(bottom,north);
                swap(north,top);
                swap(top,south);
            }
            else if(cmd=="south") { //向南轉，東西面不會動到
                swap(bottom,south);
                swap(south,top);
                swap(top,north);
            }
            else if(cmd=="west") { //向西轉，南北面不會動到
                swap(bottom,west);
                swap(west,top);
                swap(top,east);
            }
            else if(cmd=="east") { //向東轉，南北面不會動到
                swap(bottom,east);
                swap(east,top);
                swap(top,west);
            }
        }
        //output
        cout<<top<<"\n";
    }
    return 0;
}