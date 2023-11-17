#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    cin.ignore();
    while(t--) {
        cin.ignore();
        int tmp, k=0;
        vector<int> index;
        while(cin.peek()!='\n') {
            cin>>tmp;
            index.push_back(tmp);
            k++;
        }
        string res[k];
        for(int i=0;i<k;i++) {
            cin>>res[index[i]-1];
        }
        for(int i=0;i<k;i++) {
            cout<<res[i]<<"\n";
        }
        if(t>0) cout<<"\n";
        cin.ignore();
    }
    return 0;
}