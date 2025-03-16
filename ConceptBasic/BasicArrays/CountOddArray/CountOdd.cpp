#include<bits/stdc++.h>
using namespace std;
int CountOdd(int arr[],int n){
  int cnt=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2==1){
      cnt++;
    }
  }
  return cnt;
}
int main(){
  int n;
  cout<<"Enter n: ";
  cin>>n;
  int arr[n];
  cout<<"Enter elements: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Number of odd numbers: "<<CountOdd(arr,n);
  return 0;
}