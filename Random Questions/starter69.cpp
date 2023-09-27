// // #include<bits/stdc++.h>

// // using namespace std;

// // int main(){
// //  int t;
// //  cin>>t;
// //  while(t--){
// //     int a,b,c;
// //     cin>>a>>b>>c;
// //     if(a==b || b==c || c==a){
// //         cout<<"no\n";
// //     }else
// //      cout<<"yes\n";
// //  }
// // return 0;
// // }

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a, a + n);
//         int ct = 0;
        
//         int check = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (a[i] <= i + 1)
//             {
//                 ct += (i + 1) - a[i];
//             }
//             else
//             {
//                 cout << -1 << endl;
//                 check = 1;
//                 break;
//             }
//         }
//         if (check == 0)
//         {
//             cout << ct << endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while (t--)
 {
    /* code */
    int n,k, max= -1;
    cin>>n>>k;
    int a[n],b[n] ;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>max){
            max= a[i];
        }
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    if(max<k || n<k){
        cout<<-1<<endl;
        continue;
    }
    //int sum=0;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int x,y;
        x= a[i];
        y= b[i];
        v.push_back({y,x});
    }
    sort(v.begin(), v.end());
    int sum= v[0].first;
    // cout<<sum<<endl;
   int j=1, p=1;
   while( p<n-1 && j<k){
    if(v[p].second != v[p-1].second){
        sum+= v[p].first;
        j++;
    }
   
    p++;
   }
   if(j==k){
    cout<<sum<<endl;
   }else
      cout<<-1<<endl;
 }
 
return 0;
}