#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int count=0;
	if(2*n%k==0)
		count=count+(2*n)/k;
	
	else
		count=count+(2*n)/k+1;
	if((5*n)%k==0)
		count=count+(5*n)/k;
	else
		count=count+(5*n)/k+1;
	if((8*n)%k==0)
		count=count+(8*n)/k;
	else
		count=count+(8*n)/k+1;
	cout<<count;
}