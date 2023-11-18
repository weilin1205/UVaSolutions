#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;  // 總共n筆資料、目前處理到第m筆(資料編號由0開始的第m筆)

        queue<int> q;
        priority_queue<int> pq;
        for(int i=0;i<n;i++) {
            int weight;
            cin>>weight;
            q.push(weight);
            pq.push(weight);
        }
        
        int times=0,index=0;
        while(true) {
            if(q.front()==pq.top()) {  //當前優先級最高可以打印
                if(index==m) {
                    times++;
                    cout<<times<<"\n";
                    break;
                } else {
                    times++;
                    q.pop();
                    pq.pop();
                    index++;
                }
            } else {  //把當前的丟到最後面
                q.push(q.front());
                q.pop();
                if(index==m) {
                    m=q.size()-1;
                    index=0;
                } else {
                    index++;
                }
            }
        }
    }
    return 0;
}