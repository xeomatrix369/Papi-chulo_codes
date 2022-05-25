//https://codeforces.com/problemset/problem/467/A
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int emp_rooms=0;
	while(n--){
		int p,q;
		cin>>p>>q;
		if(q-p>=2){
			emp_rooms++;
		}

	}
	cout<<emp_rooms;
}