//http://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	double x=0;
	int arr[n];						
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		x+=arr[i];
	}
	cout<<setprecision(10)<< x/n;
}