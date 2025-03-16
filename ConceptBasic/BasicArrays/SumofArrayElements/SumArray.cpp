#include<bits/stdc++.h>
using namespace std;
int SumArray(int arr[],int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  return sum;
}
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<"Enter the elements of the array: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Sum of Array is: "<<SumArray(arr,n)<<endl;
  return 0;
}