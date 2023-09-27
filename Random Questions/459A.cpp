/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int x1,y1,x2,y2;
 int x3,y3, x4,y4;
 cin>>x1>>y1>>x2>>y2;
 int ans= -1;
 if(abs(x2-x1)==abs(y2-y1)){
    x3= x1;y3=y2;
    x4=x2; y4=y1;
    cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
 }else if(x1==x2){
    x3= x2+ abs(x2-x1);
    y3= y2;
    x4= x3;
    y4= y1;
     cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
 }else if(y1==y2){
    y3= y2+ abs(y3-y2);
    y4= y3;
    x3= x2;
    x4= x1;
     cout<<x3<<" "<<y3<<" "<<x4<<" "<<y4;
 }else{
    cout<<-1;
 }
return 0;
}