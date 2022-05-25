#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	bool p,t,so,r,m,sp;
	p=t=so=r=m=sp=0;
	for (int i = 0; i < n; i++)
	{
		if(s[i]=="purple")
			p=1;
		else if(s[i]=="green")
			t=1;
		else if(s[i]=="blue")
			sp=1;
		else if(s[i]=="orange")
			so=1;
		else if(s[i]=="red")
			r=1;
		else if(s[i]=="yellow")
			m=1;

	}
		cout<<6-n<<endl;
		if(p==0)
			cout<<"Power\n";
		if(t==0)
			cout<<"Time\n";
		if(sp==0)
			cout<<"Space"<<endl;
		if(so==0)
			cout<<"Soul\n";
		if(r==0)
			cout<<"Reality\n";
		if(m==0)
			cout<<"Mind\n";
}