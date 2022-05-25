#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int x1=0;
	int x0=0;
	for(int i=0;i<n;i++){
		if(s[i]=='n'){
			x1++;
		}
		if(s[i]=='z'){
			x0++;
		}
	}
	while(x1--){
		cout<<1<<" ";
	}
	while(x0--){
		cout<<0<<" ";
	}
}