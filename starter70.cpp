// // // #include<bits/stdc++.h>

// // // using namespace std;

// // // int main(){
// // //  int t;
// // //  cin>>t;
// // //  while(t--){
// // //     int x;
// // //     cin>>x;
// // //     if(x<4){
// // //         cout<<"MILD\n";
// // //     }else if(x>=4 && x<7){
// // //         cout<<"MEDIUM\n";
// // //     }else
// // //       cout<<"HOT\n";
// // //  }
// // // return 0;
// // // }

// // #include<bits/stdc++.h>

// // using namespace std;

// // int main(){
// //  int t;
// //  cin>>t;
// //  while(t--){
// //     int n,x;
// //     cin>>n>>x;
// //     int a[n], b[n];

// //     for(int i=0; i<n; i++){
// //         cin>>a[i];
// //     }
// //     for(int i=0; i<n; i++){
// //         cin>>b[i];
// //     }
// //     int sum= 0;
// //    for(int i=0; i<n; i++){
// //     if(a[i]>=x){
// //         sum+= b[i];
// //     }
// //    }
   
// //    cout<<sum<<endl;
// //  }
// // return 0;
// // }


// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int n;
//     cin>>n;
//     char a[n];
//     char b[n];
//    int act1=0, act0= 0;

//    int bct1=0, bct0= 0;
//     for(int i=0; i<n; i++){
//         cin>>a[i];
      
//     }
//      for(int i=0; i<n; i++){
//         cin>>b[i];
      
//     }
//     for(int i=0; i<n; i++){
//         if(a[i]=='0'){
//             act0++;
//         }
//         if(b[i]=='0'){
//             bct0++;
//         }
//     }
//      act1= n-act0;
//      bct1= n-bct0;
//      cout<<act1<<"\t"<<bct1<<" "<<act0<<"\t"<<bct0<<endl;
//      if(act1==bct1 && act0==bct0){
//         cout<<"yes\n";
//      }else
//          cout<<"no\n";
   
//  }
// return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int index[n];
    int j=0;
    for(int i=0; i<n; i++){
        if(s[i]=='1'){
                index[j]= i;
                j++;
        }
    }
    int cte=0, cto=0;
    for(int i=0; i<j; i++){
        if(index[i]%2==0){
            cte++;
        }else
           cto++;
    }
    if(cto==0 || cte==0){
        cout<<2<<endl;
    }else
    cout<<1<<endl;
 }
return 0;
}