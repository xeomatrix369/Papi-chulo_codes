#include<bits/stdc++.h>
using namespace std;
int cnt[3][3];
void modify(int i,int j, int inc){
	cnt[i][j]+=inc;
	if(j+1<3){
		cnt[i][j+1]+=inc;
	}
	if(j-1>-1){
		cnt[i][j-1]+=inc;
	}
	if(i+1<3){
		cnt[i+1][j]+=inc;
	}
	if(i-1>-1){
		cnt[i-1][j]+=inc;
	}
}
int main(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int x;
			cin>>x;
			modify(i,j,x);
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(cnt[i][j]%2==0)
				cout<<1;
			else
				cout<<0;
		}
		cout<<endl;
	}

}