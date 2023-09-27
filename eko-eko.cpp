#include<iostream>
#include<climits>
#define lli long long int
using namespace std;

bool ispossible(int a[], int n, int m, int maxh){
    int wood=0;
    for(int i=0; i<n; i++){
        if(a[i]>maxh){
           
            wood+= (a[i]-maxh);
             if(wood>=m){
                    // cout<<"fn return"<<maxh<<"\n";
                    return true;
            }
            
        }
    }
    return false;

}

int main(){
 lli n,m;
 cin>>n>>m;
 int a[n];
 int max= INT_MIN;
 lli e= 0;
 for(int i=0; i<n; i++){
    cin>>a[i];
    

    if(a[i]>max){
     max= a[i];
    }
 }
    e= max;
 lli res=0;
 lli s=0;
 lli maxh= s+(e-s)/2;
 while(s<=e){
    // cout<<"\nmaxh before fn:"<<maxh<<"\t";
    if(ispossible(a,n,m,maxh)){
        res= maxh;
        // cout<<res<<"\t";
        s= maxh+1;
    }else{
        e= maxh-1;
    }
    maxh= s+ (e-s)/2;
 }

cout<<res<<"\n";
return 0;
}