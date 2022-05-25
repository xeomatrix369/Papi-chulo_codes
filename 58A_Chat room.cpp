#include<bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin>>a;
	int count=0;
	string s1;
	for (int i = 1; i <=a.length(); ++i)
	{
		if(a[i]=='h'){
			s1[0]='h';
			count++;
		}
		else if(a[i]=='e' && count<i){
			s1[1]='e';
			count++;
		}
		else if(a[i]=='l'&& count<i){
			s1[2]='l';
			count++;
			
		}
		else if(a[i]=='l'&& count<i){
			s1[2]='l';
		}

		else if(a[i]=='o'&& count<i){
			s1[4]='o';
		}
	}
	if(s1=="hello"){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}