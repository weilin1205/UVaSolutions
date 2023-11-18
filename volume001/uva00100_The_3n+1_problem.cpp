//The 3n+1 problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    while(cin>>i>>j)
    {
        int m=i,n=j;
        if(i>j) 
            swap(i,j);
        int k=i;
        int max=0;
        
        while(k<=j)
        {
            int n=k;
            int temp=1;
            while(n!=1)
            {
                if(n%2==1) {//n is odd
                    n=3*n+1;
                    n/=2;
                    temp+=2;}
                if(n%2==0) {//n is even
                    n/=2;
                    temp++;}
            }
            if(max<temp) 
                max=temp;
            k++;
        }
        cout<<m<<" "<<n<<" "<<max<<endl;
    }
    return 0;
}