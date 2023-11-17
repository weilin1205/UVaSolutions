#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,w,n;
    bool again=false;
    while(cin>>t>>w>>n) {
        if(again) cout<<"\n";
        again=true;
        vector<int> d(n+1,0);   // depth
        vector<int> v(n+1,0);   // quantity of gold
        vector<int> time(n+1,0);  // depth
        for(int i=1;i<=n;i++) {
            cin>>d[i]>>v[i];
            time[i]=3*w*d[i];
        }
        // Using dynamic programming
        vector<vector<int>> dp(n+1,vector<int>(t+1,0));
        vector<vector<bool>> chosen(n+1,vector<bool>(t+1,false));
        for(int i=1;i<=n;i++) {
            for(int j=0;j<=t;j++) {
                if(time[i]<=j) {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-time[i]]+v[i]);
                    if(dp[i][j]>dp[i-1][j]) chosen[i][j]=true;
                } else {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        cout<<dp[n][t]<<endl;
        // print the result
        vector<int> selected;
        int i=n, j=t;
        while(i>0&&j>0) {
            if(chosen[i][j]) {
                selected.push_back(i);
                j-=time[i];
            }
            i--;
        }
        cout<<selected.size()<<"\n";
        for(int i=selected.size()-1;i>=0;i--) {
            cout<<d[selected[i]]<<" "<<v[selected[i]]<<"\n";
        }
    }
    return 0;
}