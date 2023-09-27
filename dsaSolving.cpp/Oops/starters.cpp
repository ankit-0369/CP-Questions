// // #include<bits/stdc++.h>

// // using namespace std;

// // int main() {
// // 	// your code goes here
// // 	int t;
// // 	cin>>t;
// // 	while(t--){
// // 	   int n;
// // 	   cin>>n;
// // 	   int a[n];
// //        int min= INT_MAX;

// // 	   for(int i=0; i<n; i++){
// // 	       cin>>a[i];
// //            if(a[i]<min){
// //             min= a[i];
// //            }
// // 	   }
// //             int ct=0;
// //        for(int i=0; i<n; i++){
// //         if(a[i]==min){
// //             ct++;
// //         }
// //        }
// //        cout<<(n-ct)<<endl;

	   
// // 	}
// // 	return 0;
// // }




#include<bits/stdc++.h>

using namespace std;

// bool solve(){
//     int n;
//     cin>>n;
//     int a[n];
//     int b[n];
//     int ct1=0;
//     for(int i=0; i<n ; i++){
//         cin>>a[i];
//         if(a[i]==1){
//             ct1++;
//         }
//     }

//     for(int i=0; i<n ; i++){
//         cin>>b[i];
//     }

    

//     if(b[n-1]!=a[n-1] || a[0]!= b[0]){
//         return false;
//     }

//     for(int i=0; i<n; i++){
//         if(a[i]==1 && b[i]==0){
//             return false;
//         }
//         if(a[i]!= b[i] && ct1==0){
//                 return false;
//         }
//     }

//     return true;
// }

vector<vector<int>> solve(int n){
        vector<vector<int>> ans;
        int k=1;
        for(int i=0; i<n; i++){
            vector<int> v;
            for(int j=0; j<n; j++){
                v.push_back(0);
            }
            ans.push_back(v);
        }
        
        int m=0;
        while(m<2){
            
             for(int i=0; i<n; i++){

                 int j=m;
            while(j<n ){
                if(ans[i][j]==0){
                    ans[i][j]= k++;
                
                }
                j+= 2;
                
            }

        }
        m++;
        }
         
       
       
    
    return ans;
}

int main(){

int t;
cin>>t;
while(t--){
       int n;
        cin>>n;
  vector<vector<int>> ans=  solve(n);
        
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }

}

return 0;
}
