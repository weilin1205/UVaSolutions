//List of Conquests
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    string s;
    map<string,int> mp;

    cin>>T;
    while(T--)
    {
        cin>>s; //僅讀入國家字串(遇到空白就會往下一行程式執行了，所以只會吃到國家名，空白鍵後的部分就不會吃到了)
        //map使用中括號 map[key] 的方式來插入元素
        mp[s]++; //map[key]=value，如果該 key 值已經存在則 value 會被更新成新的數值
        getline(cin,s); //吸收剩餘不重要的人名部分
    }
    //output
    //map 容器的迴圈遍歷
    //在此使用 基於範圍的for迴圈(range-based for loop)
    for(auto i : mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}