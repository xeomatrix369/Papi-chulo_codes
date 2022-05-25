#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	int a[n];
	int m2=0;
	int m1=100;
	for( i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<m1){
			m1=i+1;
		}
		else if(a[i]>m2){
			m2=i+1;
		}
	}
	
	if(m2<m1){
		cout<<m2-1+n-m1;
	}
	else{
		cout<<m2-1+n-m1-1;
	}
	cout<<m2<<m1<<"oo";
	cout<<"iiiiiii";

}