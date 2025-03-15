#include<bits/stdc++.h>
using namespace std;
void Pattern(int n){
	cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i+1;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
int main(){
	int n;
	cout<<endl;
	cout<<"Enter n:";
	cin>>n;
	Pattern(n);
	return 0;
}