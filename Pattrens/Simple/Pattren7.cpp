#include<bits/stdc++.h>
using namespace std;
void Pattern(int n){
	for(int i=1;i<=n;i++){

		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int j=1;j<=(2*i)-1;j++){
			cout<<"*";
		}
		for(int j=1;j<=n-i;j++){
			cout<<" ";
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