#include<bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define pii pair<int,int>
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define mii map<int,int>
#define mib map<int, bool>
#define mic map<int,char>
typedef long long ll;
typedef long long int lli;
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define PI 3.1415926535897932384626433832795

using namespace std;


void printArr(vector<int> ar){
    for(auto v: ar) cout<<v<<" ";
    cout<<endl;
}

// void helper(vector<int>& a, int x, int sum,  set<vector<int>>&s ){
//         int n= a.size();
//         bool flag= false;
//         for(int i=0; i+1<n; i++){
//             for(int j= i+1; j<n; j++){

//                     if(sum - a[i] - a[j] == x){
//                         // res[0]= a[i];
//                         // res[1]= a[j];
//                         swap(a[i], a[0]);
//                         swap(a[j], a[n-1]);
//                         // printArr(a);
//                         s.insert(a);
//                         flag= true;
//                         break;

//                     }

//             }
//         }

//        if(!flag) s.insert({-1});
// }


void solve(){
 int n,q;
 cin>>n>>q;
 vector<int> a;
 for(int i=0; i<n; i++){
    int x; cin>>x;
    a.push_back(x);
 }

 int sum=0;
 
 for(auto v:a) sum+= 2*v;

    while(q--){
       int x; cin>>x;  
        bool flag= false;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){

            int val= sum- a[i] - a[j];

            if(val == x){
                    cout<<a[i]<<" ";
                    for(int k=0; k<n; k++){
                        if(k!= i && k!= j) cout<<a[k]<<" ";
                    }

                    cout<<a[j]<<"\n";
                    flag= true;
            }

            if(flag) break;
        }

        if(flag) break;
    }

    if(!flag) cout<<-1<<"\n";
    }

 

return;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){
  solve();
}

return 0;
}