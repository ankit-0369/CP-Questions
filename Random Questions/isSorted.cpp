#include<iostream>

using namespace std;

bool isSorted(int *a, int n){
    //base case
    if(n==1)
    return 1;
  
 if( isSorted(a+1,n-1)){
    if(a[0]<a[1])
  return 1;
  else
  return 0;
 }else
 return 0;
}

int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
if( isSorted(a,n))
cout<<"Sorteed\n";
else
cout<<"Not Sorted\n";
return 0;
}