#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    while(cin>>N&&N!=-1)
    {
        long long int female=1,male=0,total=0,temp;
        while(N--)
        {
            temp=male+1;
            male=female+male;
            female=temp;
        }
        total=female+male;
        cout<<male<<" "<<total<<"\n";
    }
    return 0;
}