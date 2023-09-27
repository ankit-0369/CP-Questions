#include<bits/stdc++.h>

using namespace std;

struct twoval{
    int max;
    int min;
};

twoval maxandMin(int a[], int size){
   twoval ans;
   ans.max= INT_MIN;
   ans.min= INT_MAX;
   for(int i=0; i<size; i++){
        if(a[i]>ans.max){
            ans.max= a[i];
        }
        if(a[i]<ans.min){
            ans.min= a[i];
        }
   }
   return ans;
}


int main(){
 
 int n;
 cin>>n;
 int a[n];
 twoval print;
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 print= maxandMin(a,n);
 cout<<print.max<<" "<<print.min<<endl;
return 0;
}