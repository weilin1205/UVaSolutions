//Packing for Holiday
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int i=1;i<=T;i++) {
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a<=20 && b<=20 && c<=20) {
	    	//三邊都不超過20就輸出Case i: good。
	    	cout<<"Case "<<i<<": good\n"; }
	    else {
	    	//任意一邊超過20就輸出Case i: bad。
	    	cout<<"Case "<<i<<": bad\n"; }
	}
	return 0;
}