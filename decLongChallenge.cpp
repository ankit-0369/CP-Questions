// // // #include<bits/stdc++.h>

// // // using namespace std;

// // // int main(){
// // //  int t;
// // //  cin>>t;
// // //  while(t--){
// // //     int x,y,k;
// // //     cin>>x>>y>>k;
// // //    // int steps;
// // //     if((abs(y-x))%k==0){
// // //         cout<<(abs(y-x))/k<<endl;
// // //     }else{
// // //         cout<<(abs(y-x))/k +1<<endl;
// // //     }
// // //  }
// // // return 0;
// // // }


// // #include<bits/stdc++.h>

// // using namespace std;

// // #define ll long long
// // int main(){
// //  int t;
// //  cin>>t;
// //  while(t--){
// //    ll n,k;
// //    cin>>n>>k;
// //    ll a[n];
// //    ll prod= 1;
// //    for(int i=0; i<n; i++){
// //     cin>>a[i];
// //     prod= (prod*a[i])%k;
// //    }
// //    int check=1;
// //     if(prod%k==0){
// //         cout<<"yes\n";
// //     }else
// //     cout<<"no"
// //  }
// // return 0;
// // }


// // #include<bits/stdc++.h>

// // using namespace std;

// // int count0(string a){
// //         int ct0, ct1;
// //     for(int i=0; i<a.size(); i++){
// //         if(a[i]==0){
// //             ct0++;
// //         }else
// //         ct1++;
// //     }
// //     return ct0;
// // }

// // int count1(string a){
// //         int ct0, ct1;
// //     for(int i=0; i<a.size(); i++){
// //         if(a[i]==0){
// //             ct0++;
// //         }else
// //         ct1++;
// //     }
// //     return ct1;
// // }
// // int main(){
// //  int t;
// //  cin>>t;
// //  while(t--){
// //     string a,b;
// //     cin>>a>>b;
// //     int act0= count0(a);
// //     int bct0= count0(b);
// //     int act1= count1(a);
// //     int bct1= count1(b);
// //     if(act0>act1){
// //         sort(a.begin(), a.end());
// //     }else
// //      sort(a.begin(), a.end(), greater<int>());
// //   cout<<a<<endl; 
// //  }
// // return 0;
// // }

// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     string a,b;
//     cin>>a>>b;
//     int n= a.size();
//     int act0=0, bct0=0, act1=0, bct1=0;
//     for(int i=0; i<n; i++){
//         if(a[i]=='0'){act0++;}
//         if(b[i]=='0'){bct0++;}

//     }
//     act1= n- act0;
//     bct1= n- bct0;
//     int xor1=  min(act0, bct1) + min(bct0, act1);
//     string s= "";
//     int xor0= n- xor1;
//     for(int i=0; i<xor1; i++){
//         s+= "1";
//     }
//     for(int i=0; i<xor0; i++){
//         s+= "0";
//     }
//     cout<<s<<endl;
//  }
// return 0;
// }
#include<bits/stdc++.h>
#include<numeric>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
       
    }
    for(int i=0 ;i<n; i++){
    int l= std::lcm(a[i], n);
    cout<<lcm/n<<" ";
 }
 cout<<endl;
 }
return 0;
}