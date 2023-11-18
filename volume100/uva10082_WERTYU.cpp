#include <bits/stdc++.h>
using namespace std;

int main() {
    string table="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string str;
    while(getline(cin,str)) {
        string ans;
        for(int i=0;i<str.size();i++) {
            if(str[i]==' ') ans+=' ';
            else ans+=table[table.find(str[i])-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}