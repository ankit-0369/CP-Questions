#include<bits/stdc++.h>

using namespace std;

int sumOfdigits(int n){
    int sum=0;
    if(n<10){
        sum+= n%10;
        return sum;
    }
    int smallsum= (n%10) + sumOfdigits(n/10);
    //sum+= smallsum;
    return smallsum;
}

int main(){
 int n;
 cin>>n; 
 cout<<sumOfdigits(n);
return 0;
}