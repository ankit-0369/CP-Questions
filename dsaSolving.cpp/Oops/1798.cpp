#include<bits/stdc++.h>

using namespace std;

// bool solve1(){
//      int n;
//     cin>>n;
//     int a[n], b[n];
//     int max1= INT_MIN;
//     int max2= INT_MIN;

//     for(int i=0; i<n; i++){
//         cin>>a[i];
        
//     }
//     for(int i=0; i<n; i++){
//         cin>>b[i];
//     }
    
    
//     int i=0;
//     while(i<n){
//         if(a[i]<=a[n-1] && b[i]<=b[n-1]){
//             i++;
//         }else if(a[i]<=b[n-1] && b[i]<=a[n-1]){
//             i++;
//         }else
//         return false;
//     }

//     return true;
// }

void solve2(){
    int day;
    cin>>day;
    vector<vector<int>> khiladi;
    while(day--){
        int n;
        cin>>n;
       vector<int> v;
        for(int i=0; i<n; i++){
           int x;
           cin>>x;
           v.push_back(x);
        }
        khiladi.push_back(v);
    }
    // for(int i=0; i<khiladi.size(); i++){
    //         for(int j=0; j<khiladi[i].size(); j++){
    //             cout<<khiladi[i][j]<<" ";
    //         }
    //         cout<<endl;
    // }

    //mere paas khiladi ka sara data hai---
}

int main(){
 int t;
 cin>>t;
 while(t--){
//    if(solve1()){
//     cout<<"YES\n";
//    }else
//    cout<<"NO\n";
        solve2();

 }
return 0;
}