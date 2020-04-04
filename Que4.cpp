#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	string s;
	cin>>s;
	while(t--){
		char c;
		string str="";
		for(int j=0;j<10;j++){
			str+="0";
		}
		for(int i=1;i<=10;i++){
			cout<<i<<endl;
			cout.flush();
			cin>>c;
			str[i-1]=c;
		}
		cout<<str<<endl;
		cout.flush();
		char f;
		cin>>f;
		if(f=='Y')continue;
		else return 0;
	}
	return 0;
}