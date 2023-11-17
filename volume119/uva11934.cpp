// Magic Formula
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c,d,l;
    while((cin>>a>>b>>c>>d>>l) && !(a==0 && b==0 && c==0 && d==0 && l==0)) {
        int ans=0;
        for(int x=0;x<=l;x++) {
            if((a*x*x+b*x+c)%d==0) ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}