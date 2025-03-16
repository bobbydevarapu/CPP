#include<bits/stdc++.h>
using namespace std;
int ArraySorted(int arr[],int n){
    int l=0,r=n-1;
    while(l<r){
      swap(arr[l],arr[r]);
      l++,r--;
    }
}
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout<<"Enter the element: ";
    cin>>arr[i];
  }
  ArraySorted(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}