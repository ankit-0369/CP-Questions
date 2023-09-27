// // #include<bits/stdc++.h>

// // using namespace std;

// // int main(){
// //  int t;
// //  cin>>t;
// //  while (t--)
// //  {
// //     int  a,b,c;
// //     cin>>a>>b>>c;
// //     if(a*b==c || b*c==a|| c*a==b){
// //         cout<<"yes\n";
// //     }else
// //     cout<<"no\n";
// //     /* code */
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
//     int a[n], b[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//      for(int i=0; i<n; i++){
//         cin>>b[i];
//     }
//     int ct=0;
//     int max=0;
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i]!=0 && b[i]!=0){
//             ct++;
//             if(ct>max){
//                 max=ct;
//             }
//         }else{
//             ct=0;
//         }
           
//     }
//     cout<<max<<"\n";
//  }
// return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int hash[107];
    for(int i=0; i<107; i++){
            hash[i]=0;
    }
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        
    }

     for(int i=0; i<n; i++){
          hash[a[i]]++;
          
    }
    
    bool found= true;
   
    for(int i=0; i<101; i++){
        if( (hash[i]%2)!=0 && hash[i]!=0){
                found= false;
            break;
        }
    }
   
    if(found){
        cout<<"yes\n";
    }else{
      cout<<"no\n";
    }
 }
return 0;
}