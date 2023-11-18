//A mid-summer night’s dream
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int A[n]={0},mid1,mid2,cnt=0,c;
        for(int i=0;i<n;i++) {
            cin>>A[i]; }
        sort(A,A+n);
        if(n%2==1) //n為奇數，有一個中位數
        {
            mid1=A[(n-1)/2]; //找出中位數
            for(int i=0;i<n;i++) { //找出數列中有幾個與中位數相同的數字
                if(A[i]==A[n/2]) cnt++;
            }
            c=1; //找出這個中位數有幾種可能，這裡只有一個中位數，所以只有一種可能
        }
        else //n為偶數，有2個中位數
        {
            mid1=A[n/2-1]; //找出2個中位數
            mid2=A[n/2];
            for(int i=0;i<n;i++) { //找出數列中有幾個與中位數相同的數字
                if(A[i]==A[n/2]) cnt++;
                else if(A[i]==A[(n-1)/2]) cnt++;
            }
            c=mid2-mid1+1; //找出這個中位數有幾種可能，這裡有兩個中位數，所以要包含這兩個中位數外
            //，還要再包含兩數之間的所有整數。例如：中位數為5,8，則 c=5,6,7,8
        }
        cout<<mid1<<" "<<cnt<<" "<<c<<"\n";
    }
    return 0;
}