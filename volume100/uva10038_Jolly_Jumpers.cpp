//Jolly Jumpers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int table[3005]={0},flag=1;
        //input
        for(int i=1;i<=n;i++) {
            cin>>table[i]; }
        //記錄相鄰數字的差，有出現過便標上1
        int check[3005]={0};
        for(int i=1;i<n;i++) {
            check[abs(table[i+1]-table[i])]=1; }
        //判斷check數列中是否由1~n-1都是1
        for(int i=1;i<n;i++) {
            if(check[i]!=1) {
                flag=0;
                break; }
        }
        //output
        if(flag==1) 
            cout<<"Jolly\n";
        else 
            cout<<"Not jolly\n";
    }
    return 0;
}