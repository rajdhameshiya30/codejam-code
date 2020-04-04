#include<bits/stdc++.h>
using namespace std;
signed main(){
	FAST
	int t;
	cin>>t;
	int temp = t;
	while(t--){
		cout<<"Case #"<<temp-t<<": ";
		int n;
		cin>>n;
		vector<pair<int,int>>v,vi;
		map<pair<int,int>,int>mp;
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			v.push_back({x,y});
			vi.push_back({x,y});
			mp[{x,y}] = i;
		}
		sort(v.begin(),v.end());
		char arr[n];
		for(int i=0;i<n;i++){
			arr[i]='J';
		}
		arr[mp[{v[0].first,v[0].second}]]='J';
		int jmx=v[0].second,cmx=0,flag=0,f=0;
		for(int i=1;i<n;i++){
			if(v[i].first>=jmx){
				arr[mp[{v[i].first,v[i].second}]]='J';
				jmx = v[i].second;
			}
			else if(f==0){
				arr[mp[{v[i].first,v[i].second}]]='C';
				cmx = v[i].second;
				f++;
			}
			else if(v[i].first>=cmx){
				arr[mp[{v[i].first,v[i].second}]]='C';
				cmx = v[i].second;
			}
			else{
				flag++;
				break;
			}
		}
		if(flag!=0){
			cout<<"IMPOSSIBLE"<<endl;
		}
		else{
			for(int i=0;i<n;i++)cout<<arr[i];
			cout<<endl;
		}
	}
}
