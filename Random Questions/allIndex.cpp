#include<bits/stdc++.h>

using namespace std;
void all_pos(int a[], int size, int key, int index=0){
    if(size==0){
        cout<<-1;
    }
    //base case
    if(size==1){
        if(a[0]==key){
            cout<<index<<endl;
            
        }
          return;
    }
    if(a[0]==key){
        cout<<index<<" ";
        index++;
    }else{
        index++;
    }
        all_pos(a+1, size-1, key, index);
       

}
int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
    cin>>a[i];
 }
 int x;
 cin>>x;
 all_pos(a,n,x);
return 0;
}