//Hashmat the brave warrior
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b; //測資範圍到2^32，所以不能只用int
    while(cin>>a>>b)
    {
        cout<<abs(b-a)<<"\n";
    }
    return 0;
}