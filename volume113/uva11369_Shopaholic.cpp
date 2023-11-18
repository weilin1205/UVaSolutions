//Shopaholic
#include<bits/stdc++.h>
using namespace std;
/*
int cmp(int a, int b)
{
	return a > b;
}
*/
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int pi[n];
        //input
        for(int i=0;i<n;i++)
            cin>>pi[i];
        //calculate
        int sum=0;
        sort(pi,pi+n,greater<int>());  //降序排列
//      sort(pi,pi+n,cmp);  //降序排列
        for(int i=2;i<n;i+=3)
            sum+=pi[i];
        //output
        cout<<sum<<"\n";
    }
    return 0;
}