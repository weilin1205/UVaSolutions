//B2-Sequence
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,cases=1;
    while(cin>>n)
    {
        int a[n+5];
        bool flag=true;
        //開始輸入
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //第一階段檢查
            //如果輸入小於1，則flag=flase
            if(a[i]<1) {
                flag=false;}
            //如果出現前數大於等於後數，則flag=flase
            if((i>=1)&&(a[i-1]>=a[i])) {
                flag=false;}
        }
        //輸入完畢
        //如果第一階段檢查通過，則進行第二階段檢查
        //如果出現重複的sum，則flag=flase
        int index;
        int sum[20005]={0};
        if(flag==true)
        {
            //注意，由於題目是i<=j，所以有i==j的可能會出現
            for(int j=0;j<n;j++)
            {
                for(int k=j;k<n;k++)
                {
                    index=a[j]+a[k];
                    //未出現過的數字sum[index]會是0，出現過後便會變成1
                    if(sum[index]==0) { 
                        sum[index]=1;}
                    else { //如果有出現過，則flag=flase
                        flag=false;
                        break;}
                }
            }
        }
        //output
        if(flag==true){
            printf("Case #%d: It is a B2-Sequence.\n",cases);}
        else{
            printf("Case #%d: It is not a B2-Sequence.\n",cases);}
        cases++;
        cout<<endl;
    }
    return 0;
}