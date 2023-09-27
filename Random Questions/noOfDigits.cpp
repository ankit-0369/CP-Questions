#include<bits/stdc++.h>

using namespace std;
int noOfdigits(int n){
    int sum= 1;
    if(n<10){
        return sum;
    }
    sum+= noOfdigits(n/10);
    return sum;
}
int main(){
 int n;
 cin>>n;
cout<<noOfdigits(n)<<endl;
return 0;
}