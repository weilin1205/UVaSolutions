#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
//  while(scanf("%d",&t)!=EOF) {
    while(cin>>t) {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        int type,x;
        bool iss=true, isq=true, ispq=true;
        while(t--) {
            cin>>type>>x;
            if(type==1) {
                s.emplace(x);
                q.emplace(x);
                pq.emplace(x); 
            } else {    //type==2
                if(iss) {
                    if(!s.empty() && x==s.top()) s.pop();
                    else iss=false;
                }
                if(isq) {
                    if(!q.empty() && x==q.front()) q.pop();
                    else isq=false;
                }
                if(ispq) {
                    if(!pq.empty() && x==pq.top()) pq.pop();
                    else ispq=false;
                }
            }
        }
        if(iss&&!(isq)&&!(ispq)) cout<<"stack\n";
        else if(!(iss)&&isq&&!(ispq)) cout<<"queue\n";
        else if(!(iss)&&!(isq)&&ispq) cout<<"priority queue\n";
        else {
            if(iss||isq||ispq) cout<<"not sure\n";
            else cout<<"impossible\n";
        }
    }
    return 0;
}