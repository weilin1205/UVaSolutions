#include <bits/stdc++.h>
using namespace std;

// Using Sieve of Eratosthenes to Find Prime
bool isPrime(int n) {
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int t, kase=1;
    cin>>t;
    while(t--) {
        string s,ans;
        map<int,int> mp;
        cin>>s;
        for(const auto& str:s) {
            mp[str]++;
        }
        for(const auto& m:mp) {
            if(isPrime(m.second)) {
                ans+=m.first;
            }
        }
        if(ans.empty()) {
            printf("Case %d: empty\n", kase++);
        } else {
            printf("Case %d: %s\n", kase++,ans.c_str());
        }
    }
}