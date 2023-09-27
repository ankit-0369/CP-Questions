// // #include<bits/stdc++.h>

// // using namespace std;

// // int main(){
// //  int t;
// //  cin>>t;
// // while(t--){
// //     int x;
// //     cin>>x;
// //     if(x>=2000){
// //         cout<<"yes\n";
// //     }else
// //     cout<<"no\n";
// // }
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
//     string s;
//     cin>>s;
//     int check=0;
//     for(int i=0; i<=(n/2)-1; i++){
//        int x= n/2;
//         if(s[i]!=s[x+i]){
//             check=1;
//             break;
//         }
//     }
//    if(check==1){
//     cout<<"no\n";
//    }else{
//     cout<<"yes\n";
//    }
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
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    cout<<a[n-1]<<"\n";

 }
return 0;
}