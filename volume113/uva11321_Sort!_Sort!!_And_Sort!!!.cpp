//Sort! Sort!! And Sort!!!
#include <bits/stdc++.h>
using namespace std;

int n,m;
bool cmp(int a,int b)
{
    if(a%m!=b%m) return a%m<b%m; //餘數不同，餘數小的前 大的後
    else //餘數相同
    {
        if(abs(a%2)) {
            if(abs(b%2)) return a>b; //a奇b奇，大奇數排前面
            else return true; //a奇b偶，所以位置要互換
        }
        else {
            if(abs(b%2)) return false; //a偶b奇數，所以位置不用換
            else return a<b; //a偶b偶，小偶數排前面
        }
        //一奇一偶，奇數前 偶數後
        //兩奇數，大奇前
        //兩偶數，小偶前
    }
    return a<b;
}
int main()
{
    while(cin>>n>>m)
    {
        if(n==0&&m==0) {
            cout<<0<<" "<<0<<"\n";
            break; }
        cout<<n<<" "<<m<<"\n";
        //input
        int A[10005];
        for(int i=0;i<n;i++) {
            cin>>A[i]; }
        //sort
        sort(A,A+n,cmp); //對數組A的0~n-1元素進行cmp排序
        //output
        for(int i=0;i<n;i++) {
            cout<<A[i]<<"\n"; }
    }
    
    return 0;
}