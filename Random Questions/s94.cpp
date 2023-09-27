#include<bits/stdc++.h>

using namespace std;

bool check(vector<int> a, int i, int j, int b){
    int ans=1;
    // cout<<"working\n";
    for(int k=i; k<=j; k++){
        ans= ans&a[k];
    }

    return (ans==b);
}

bool solve(vector<int> a, int n, int b){
    
    for(int i=0; i<n; i++){
        
        for(int j=i+1; j<n; j++){
               if( check(a,i,j,b))
               return true;
        }
    }

    return false;
}

int main(){
 int t;
 cin>>t;
 while(t--){
    int n, b;
    cin>>n>>b;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    if(solve(a,n, b)){
        cout<<"yes\n";
    }else{
        cout<<"no\n";
    }
 }
return 0;
}

































// #include <iostream>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// bool checkSubsequence(vector<int>& arr, int target) {
//     unordered_set<int> possibleResults;

//     int n = arr.size();
//     for (int i = 0; i < n; i++) {
//         unordered_set<int> newResults;
//         newResults.insert(arr[i]);

//         for (int num : possibleResults) {
//             int result = num & arr[i];
//             newResults.insert(result);
//         }

//         possibleResults.insert(newResults.begin(), newResults.end());

//         if (possibleResults.count(target) > 0)
//             return true;
//     }

//     return false;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, target;
//         cin >> n >> target;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         if (checkSubsequence(arr, target)) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }
