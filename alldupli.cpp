#include<bits/stdc++.h>

using namespace std;

// vector<int> findDuplicates(vector<int>& a) {
//         int n= a.size();
//        vector<int> hash(n, 0);
//        for(int i=0; i<n; i++){
//            hash[a[i]]++;
//        }
//        vector<int> v;
//        for(int i=0; i<n; i++){
//            if(hash[i]==2){
//                v.push_back(i);
//            }
//        }
//        return v;
//     }

vector<int> findDuplicates(vector<int>& a) {
        int n= a.size();
    // //    vector<int> hash(n, 0);
    // //    for(int i=0; i<n; i++){
    // //        hash[a[i]]++;
    // //    }

    //    vector<int> v;
    //    for(int i=0; i<n; i++){
    //        if(hash[i]==2){
    //            v.push_back(i);
    //        }
    //    }
    //    return v;
cout<<"fn working"<<endl;
    sort(a.begin(), a.end());
    for(int i=0; i<n-1; i++){
        if(a[i]!=a[i+1]){
            auto it= a.begin();
            a[i]= 0;
        }
    }

    return a;
    }

int main(){
 vector<int> v;
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
 }
 vector<int > ans= findDuplicates(v);
 cout<<ans.size()<<endl;
 for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<"\t";
 }

return 0; 
}