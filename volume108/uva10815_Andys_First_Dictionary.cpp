#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    set<string> s;
    while(cin>>str) {
        string tmp;
        for(int i=0;i<=str.size();i++) {
            if(isalpha(str[i])) { 
                tmp+=tolower(str[i]);
            } else if(tmp!="") {
                s.emplace(tmp);
                tmp.clear();
            }
        }
    }
    
    for(const auto& ss:s) {
        cout<<ss<<"\n";
    }
    return 0;
}