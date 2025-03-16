#include<bits/stdc++.h>
using namespace std;
int Largest(int arr[], int n){
  int maxi=arr[0];
  for(int i=0;i<n;i++){
    if(arr[i]>maxi){
      maxi=arr[i];
    }
  }
  return maxi;
}
  int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"Largest element in the array is: "<<Largest(arr,n);
    return 0;
}