#include<bits/stdc++.h>

using namespace std;
int check_no(int a[], int size, int key, int index= 0){
    // if(size==0){
    //     return false;
    // }
    
    if(size==1){
        if(a[0]==key){  
            return index;
        }else
          return false;
    }
   if(a[0]==key){
    return index;
   }else
    index++;
   int isfound= check_no(a+1, size-1, key, index);
   return isfound;
}
int main(){
 int n,x;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 cin>>x;
//  if(check_no(a,n,x)){
//     cout<<"true\n";
//  }else
//  cout<<"false\n";
cout<<check_no(a,n,x);
return 0;
}