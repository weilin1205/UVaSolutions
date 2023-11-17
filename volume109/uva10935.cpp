# include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    while(cin>>a && a!=0) {
        queue<int> q;
        for(int i=1;i<=a;i++) {
            q.push(i);
        }
        // Complete queue initialization

        cout<<"Discarded cards:";
        while(q.size()>1) {
            if(q.size()==2) {
                cout<<" "<<q.front();
            } else {
                cout<<" "<<q.front()<<",";
            }
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout<<"\nRemaining card: "<<q.front()<<"\n";
    }
    return 0;
}