//Parity
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        
        bitset<32> bits(n); //長度爲32，把十進制n轉為二進制，前面用0補充
        int msb=31; //最高有效位元 (Most Significant Bit)
        while(bits[msb]!=1) msb--; //去除無效位
        
        //output
        cout<<"The parity of ";
        for(int i=msb;i>=0;i--) {
            cout<<bits[i]; }
        cout<<" is "<<bits.count()<<" (mod 2).\n"; //count()函數用來求bitset中1的總數
    }
    return 0;
}