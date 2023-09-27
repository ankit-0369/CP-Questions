#include<iostream>
#include<algorithm>
using namespace std;

void solve(int* arr, int n){
    int i=0, j=n-1;
    while(i<=j){
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i++], arr[j--]);
        }else if(arr[i]<0){
            i++;
        }else if(arr[j]>0){
            j--;
        }
    }

    return;
}

int main(){
 int n;cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }
 solve(arr,n);
  for(int i=0; i<n; i++){
    cout<<arr[i];
 }
return 0;
}