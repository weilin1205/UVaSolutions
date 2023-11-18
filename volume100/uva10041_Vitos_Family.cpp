//Vito's Family
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;  //Testcases
    scanf("%d",&T);
    while(T--)
    {
        int r; //relatives
        scanf("%d",&r);
        int v[501]={}; //用來裝親戚住的街址
        int res=0; //results
        for(int i=0;i<r;i++) {
            scanf("%d",&v[i]); }
        sort(v,v+r); //升序排列
        int mid=v[r/2]; //主角要住在中位數的地方
        for(int i=0;i<r;i++) {
            res+=abs(mid-v[i]); }
        printf("%d\n",res);
    }
    return 0;
}