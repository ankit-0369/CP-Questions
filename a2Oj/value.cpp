// // /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// // #include<bits/stdc++.h>
// // #define ll long long int

// // using namespace std;

// // int main(){
// //  int t;
// //  cin>>t;
// //  while(t--){
// //     int n,x,k;
// //     cin>>n>>x>>k;
// //     int b= x- (x/k);
// //     int g= n-x;
// //     g-= (g/k);
// //     int ans= n- 2*max(b,g);
// //     cout<<ans<<"\n";
// //  }
// // return 0;
// // }


// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include<bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int c,f;
//     cin>>c>>f;
//     int ans=0;
//     int ch=c, fr=f;
//     int cnt=0;
//     if(c>=f){
//            while(ch>fr){
//         ch--, fr++;
//         cnt++;
//         if(ch % fr==0){
//             ans= cnt;
//             break;
//         }
//     }

//     }else{
//         int cnt=0;
//         while(f!=1){
//             c++, f--;
//             cnt++;
//             if(c%f==0){
//                 ans= min(ans, cnt);
//                 break;
//             }
//         }
//     }

//     cout<<ans<<"\n";
//  }
// return 0;
// }







#include <bits/stdc++.h>
using namespace std;
#define int long long int

void f(){
    int chef, fri;
    cin>>chef>>fri;
    int cVal = chef, friendVal = fri;
    int res = 0, ans1 = 0, ans2 = 0;
    while(fri>=1){
        if(chef%fri==0) break;
        chef++, fri--;
        ans1++;
    }
    while(cVal>=1){
        if(cVal%friendVal==0) break;
        cVal--, friendVal++;
        ans2++;
    }
    if(cVal>=friendVal) cout<<min(ans1, ans2)<<endl;
    else cout<<ans1<<endl;
}

int32_t main() {
  // your code goes here
  int T; cin>>T;
  while(T--) 
  f();
  
  return 0;
}