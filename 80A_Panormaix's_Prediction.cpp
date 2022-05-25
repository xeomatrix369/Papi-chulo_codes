#include<bits/stdc++.h>
using namespace std;
bool prime(int x){
	bool flag=1;
	for(int i=2;i<x;i++){
		if(x%i==0){
			flag=0;
		}

	}
	return flag;

}
int main(){
	int n,m;
	cin>>n>>m;
	int x=n;
	for(int i=0;i<m-n;i++){
		x++;
		if(prime(x)==1){
			if(x==m){
				cout<<"YES";
				return 0;
			}
			else{
				cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
}