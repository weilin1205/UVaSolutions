//Symmetric Matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,cases=1;
    cin>>T;
    while(T--)
    {
        char n1,n2;
        int size;
        cin>>n1>>n2>>size;
        //input
        long long int table[size*size];
        int i;
        for(i=0;i<size*size;i++)
        {
            cin>>table[i];
        }
        //check
        for(i=0;i<size*size;i++)
        { //因為會以中間為對稱點，所以從最外圍兩個數字開始往中間去比對 
            if(table[i]!=table[(size*size-1)-i]||table[i]<0) break; //若數字不一樣或是數字小於0就中斷 
        }
        //output
        if(i==size*size) //如果迴圈沒有被中斷就是對稱矩陣 
        {
			cout<<"Test #"<<cases<<": Symmetric."<<endl;
		}
        else
        {
			cout<<"Test #"<<cases<<": Non-symmetric."<<endl;
		}
        cases++;
    }
    return 0;
}

/*
二維陣列視為一維陣列
舉例：
5 0 9
3 2 3   相當於  5 0 9 3 2 3 9 0 5
9 0 5
*/