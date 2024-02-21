// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include<bits/stdc++.h>
// #define ll long long int

// using namespace std;

// vector<int> solve(int n, int k){
//     vector<int> ans;

// }

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int n,k;
//     cin>>n>>k;
//     vector<int> ans= solve(n,k);
//     for(auto val: ans) cout<<val<<" ";
//     cout<<endl;
//  }
// return 0;
// }


#include<bits/stdc++.h>

using namespace std;


int main(){
    int t; 
    cin>>t;
    while(t--){
       long long n,k;
        cin>>n>>k;
         long long div = n/k;
         long long value = div;
         while(k--){
            cout<<value<<" ";
            value += div;
         }
         cout<<endl;
    }
    return 0;
}