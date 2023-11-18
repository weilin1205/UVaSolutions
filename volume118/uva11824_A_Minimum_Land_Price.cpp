#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> v;
        int input;
        while(cin>>input&&input!=0) {
            v.push_back(input);
        }
        sort(v.begin(),v.end(),greater<int>());
    
        long long int res=0;
        for (int i = 0; i < v.size(); i++) {
            long long int power = 1;
            for (int j = 0; j < i + 1; j++) {
                power *= v[i];
            }
            res += 2 * power;
            if(res>5000000) {
                cout<<"Too expensive"<<endl;
                break;
            }
        }
        if(res<=5000000) cout<<res<<endl;
    }
    return 0;
}