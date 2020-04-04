#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;
	int temp = t;
	while(t--){
		cout<<"Case #"<<temp-t<<": ";
		string s;
		string str="";
		cin>>s;
		int check;
		for(int i=0;i<s.length();i++){
			if(i==0){
				for(int j=0;j<s[i]-'0';j++){
					str+="(";
				}
				str+=s[i];
				//check = s[i]-'0';
			}
			else{
				int p = s[i]-s[i-1];
				if(p<0){
					for(int i=0;i<abs(p);i++){
						str+=")";
					}
					str+=s[i];
				}
				else{
					for(int i=0;i<p;i++){
						str+="(";
					}
					str+=s[i];
				}
				
			}
		}
		for(int i=0;i<s[s.length()-1]-'0';i++){
			str+=")";
		}
		cout<<str<<endl;
	}
}