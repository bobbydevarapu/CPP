#include<bits/stdc++.h>
using namespace std;
bool SortOrNot(int arr[],int n){
  for(int i=1;i<=n;i++){
    if(arr[i]<arr[i-1])return false;
  }
  return true;
}
int main(){
  int n;
  cout<<"Enter n :";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  if(SortOrNot(arr,n))cout<<"Sorted Array";
  else cout<<"Not Sorted Array";
  return 0;
}