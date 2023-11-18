#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;  //the number of objects
        vector<int> p(n+1,0),w(n+1,0);
        for(int i=1;i<=n;i++) {
            cin>>p[i]>>w[i];
        }
        int g;
        cin>>g;  //the number of people in our group
        vector<int> carry(g+1,0);
        int maximum=0;
        for(int i=0;i<g;i++) {
            cin>>carry[i];
            if(carry[i]>maximum) maximum=carry[i];
        }
        // Using dynamic programming
        vector<int> dp(maximum+1,0);
        for(int i=1;i<=n;i++) {
            for(int j=maximum;j>=w[i];j--) {
                dp[j]=max(dp[j],dp[j-w[i]]+p[i]);
            }
        }
        // result
        int res=0;
        for(int i=0;i<g;i++) {
            res+=dp[carry[i]];
        }
        cout<<res<<endl;
    }
    return 0;
}