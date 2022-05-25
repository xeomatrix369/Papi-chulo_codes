#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ant=0;
	int dan=0;
	//counting the number of wins by both anton and danik
	for(int i=0;i<n;i++){
		if(s[i]=='A')
			ant++;
		else
			dan++;
	}
	if(ant>dan)
		cout<<"Anton";
	else if(dan>ant)
		cout<<"Danik";
	else
		cout<<"Friendship";
}