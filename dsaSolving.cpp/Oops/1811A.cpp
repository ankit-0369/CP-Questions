// #include<bits/stdc++.h>

// using namespace std;
// void solve2();
// void solve1(){
//      int n,d;
//     cin>>n>>d;
//     char s[n+1];
//     cin>>s;
//     int i;
//     for( i=0; i<n; i++){
//         int x= s[i]-'0';
//         if(x<d){
         
//             for(int j=n-1; j>=i; j--){
//                 s[j+1]= s[j];
//             }
//             break;
//         }
        
//     }
//     s[i]= (char)d+'0';
//     for(int i=0; i<n+1; i++){
//         cout<<s[i];
//     }
//     cout<<endl;
//     return;
// }

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
   
//     // solve1();
//     solve2();
//  }
// return 0;
// }
// int distance(int x1, int y1, int n){
//         pair<int,int> m;
//     if(x1<=n/2 && y1<=n/2){
//         m.first= n/2;
//         m.second= n/2;
//     }else if(x1>n/2 && y1<=n/2){
//         m.first=n/2+1;
//         m.second= n/2;
//     }else if(x1<=n/2 && y1>n/2){
//         m.first= n/2;
//         m.second= n/2+1;
//     }else{
//         m.first= n/2+1;
//         m.second= n/2+1;
//     }
//      int d= max(abs((m.first-x1)),abs((m.second-y1)));
//      return abs(d);
// }
// void solve2(){
//     int n,x1,y1,x2,y2;
//     cin>>n>>x1>>y1>>x2>>y2;
//     int d1= distance(x1,y1,n);
//     int d2= distance(x2,y2,n);
//    cout<<abs(d1-d2)<<endl;
// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n-1);
        for (int i = 0; i < n-1; i++) {
            cin >> b[i];
        }

        // Determine the corresponding array a
        vector<int> a(n);
        a[n-1] = b[n-2];
        for (int i = n-2; i >= 1; i--) {
            a[i] = min(b[i-1], b[i]);
        }
        a[0] = b[0];

        // Output the resulting array a
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
