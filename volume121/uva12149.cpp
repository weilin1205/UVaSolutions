//Feynman
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {   //使用公式解：
        //設邊常為n，當邊常為n時共有方形數
        //S[n]=1^2+2^2+3^2+......+n^2=
        //Σ[n]=n^2=n(n+1)(2n+1) / 6
        cout<<n*(n+1)*(2*n+1)/6<<"\n";
    }
    return 0;
}