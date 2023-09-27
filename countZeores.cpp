#include<bits/stdc++.h>

using namespace std;

int countZero(int n){
    int sum= 0;
    if(n<10){
        if(n%10==0){
            return 1;
        }else
          return 0;
    }
    if(n%10==0){
        sum++;
    }
    sum+= countZero(n/10);
    return sum;
}

int main(){
 int n;
 cin>>n;
 cout<<countZero(n);
return 0;
}