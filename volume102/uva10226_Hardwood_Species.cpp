//Hardwood Species
#include <bits/stdc++.h>
using namespace std;
// fast IO
static auto __ = []()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return 0;
}();

int main()
{
    int T;
    string s;
    cin>>T;
    cin.ignore();
    // avoid space
    getline(cin,s);
    while(T--)
    {
        map <string,double> tree;
        double total=0;
        //input
        while(getline(cin,s)&&s!="") {  //輸入間有空行，當遇到空行時停下
//      while(getline(cin,s)&&!s.empty()) { //另一種寫法
            tree[s]++; //該樹種出現次數+1
            total++; }
        //output
        for(const auto& i : tree) {
            cout<<i.first<<" "<<fixed<<setprecision(4)<<i.second/total*100<<"\n"; }
//      for(auto& [name, num] : tree) { //另一種寫法
//          cout<<name<<" "<<fixed<<setprecision(4)<<num/total*100<<"\n"; }
        if(T) cout<<"\n"; //輸出間空行，最後輸出不空行
        tree.clear();
    }
    return 0;
}

//參考資料：https://www.larrysprognotes.com/UVa-10226/