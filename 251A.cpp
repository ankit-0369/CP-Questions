/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int n,d;
 cin>>n>>d;
 int sum=0;
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    sum+=x;
 }

sum+= (n-1)*10;
if(d<sum){
    cout<<-1;
   
}else{
    cout<<((n-1)*2 + (d-sum)/5);
}

return 0;
}