//https://codeforces.com/problemset/problem/677/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	int min_width=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x>h)
			min_width+=2;
		else
			min_width++;
	}
	cout<<min_width;

}