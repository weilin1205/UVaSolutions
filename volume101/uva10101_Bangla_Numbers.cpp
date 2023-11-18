//Bangla Numbers
#include <bits/stdc++.h>
using namespace std;
void Bangla(long long int n)
{
    while(n>0)
    {
        if(n>=10000000) {
            cout<<" "<<n/10000000<<" kuti";
            n%=10000000;
            continue; }
        if(100000<=n&&n<10000000) {
            cout<<" "<<n/100000<<" lakh";
            n%=100000;
            continue; }
        if(1000<=n&&n<100000) {
            cout<<" "<<n/1000<<" hajar";
            n%=1000;
            continue; }
        if(100<=n&&n<1000) { 
            cout<<" "<<n/100<<" shata";
            n%=100;
            continue; }
        else {
            cout<<" "<<n;
            break; }
    }
}

int main()
{
    long long int n;
    int T=1;
    while(cin>>n)
    {
        cout<<setw(4)<<setfill(' ')<<T<<".";
        if(n==0) cout<<" "<<0;
        if(n>=10000000) {
            Bangla(n/10000000);
            cout<<" kuti";
            Bangla(n%10000000);}
        else {
            Bangla(n);}
        cout<<"\n";
        T++;
    }
    return 0;
}