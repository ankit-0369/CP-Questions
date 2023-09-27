// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int a,b;
//     cin>>a>>b;
//     if(a< 2*b){
//         cout<"first\n";
//     }else if(a>2*b){
//         cout<<"second\n";
//     }else
//     cout<<"both\n";
//  }
// return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int divisor(int x){
    for(int i=2; i<=x; i++){
        if(x%i==0)
        return i;
    }

    return 0;
}

int main(){
 int t;
 cin>>t;
 while(t--){
    int x,y;
    cin>>x>>y;
    int div= divisor(x);
    int res=0;
    if(x%2==0){
        res=0;
        div=0;
    }else
    res=1;
    if((y-x-div)%2==0){
        res+= (y-x-div)/2;
    }else
    res+= (y-x-div)/2+1;
    cout<<res<<endl;
 }
return 0;
}