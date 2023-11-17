#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    while(cin>>n>>t) {
        vector<int> time(t+1,0);
        for(int i=1;i<=t;i++) cin>>time[i];
        // Using dynamic programming
        vector<vector<int>> dp(t+1,vector<int>(n+1,0));
        vector<vector<bool>> chosen(t+1,vector<bool>(n+1,false));
        for(int i=1;i<=t;i++) {
            for(int j=0;j<=n;j++) {
                if(time[i]<=j) {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-time[i]]+time[i]);
                    if(dp[i][j]>dp[i-1][j]) chosen[i][j]=true;
                } else {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        // print the result
        int i=t,j=n;
        vector<int> selected;
        while(i>0&&j>0) {
            if(chosen[i][j]) {
                selected.push_back(i);
                j-=time[i];
            }
            i--;
        }
        for(int i=selected.size()-1;i>=0;i--) {
            cout<<time[selected[i]]<<" ";
        }
        cout<<"sum:"<<dp[t][n]<<endl;
    }
    return 0;
}
