//Eb Alto Saxophone Player
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    unordered_map<char,string>finger= //unordered_map容器初始化
    {   //建立指法對照表
        {'c',"0111001111"},{'d',"0111001110"},
        {'e',"0111001100"},{'f',"0111001000"},
        {'g',"0111000000"},{'a',"0110000000"},
        {'b',"0100000000"},{'C',"0010000000"},
        {'D',"1111001110"},{'E',"1111001100"},
        {'F',"1111001000"},{'G',"1111000000"},
        {'A',"1110000000"},{'B',"1100000000"}
    };
    cin>>T;
    cin.ignore(); //因為cin接下來要用到getline，所以要用cin.ignore()去清空cin的緩存區
    while(T--)
    {
        string song,present;
        present.assign(10,'0'); //對字串present賦值10個0
//      present="0000000000";
        int cnt[10]; //(count) 計算各手指按的次數，作為最終輸出使用
        fill(cnt,cnt+10,0); //fill(begin,end,value)，主要功能是填充容器中某個範圍內的值，注意：範圍中包括“開始”，但不包括“結束”

        //input
        getline(cin,song); //歌曲可能為空，故用getline讀取

        //calculate
        for(const auto& ch : song) //基於範圍的for迴圈(for-range loop)
        { //當只想讀取range裡的元素時，使用const auto&這種用法 (for(const auto& x : range))
            for(int i=0;i<10;i++)
            {
                cnt[i]+=max(0,finger[ch][i]-present[i]);
            }
            present=finger[ch];
        }
        
        //output
        for(int i=0;i<10;i++)
        {
            if(i) cout<<" ";
            cout<<cnt[i];
//          if(i<9) cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}