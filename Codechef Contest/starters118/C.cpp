/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int setBitNumber(int n){
     int k = __builtin_clz(n);
 
    // To return the value
    // of the number with set
    // bit at (31 - k)-th position
    // assuming 32 bits are used
    return 1 << (31 - k);
}

int main(){
 int t;
 cin>>t;
 while (t--)
 {
    /* code */
    int x;
    cin>>x;
    int a=  setBitNumber(x)-1;
    a= 1<<a;
    int b= a^x;
    cout<<b<<" "<<a<<"\n";

 }
 
return 0;
}