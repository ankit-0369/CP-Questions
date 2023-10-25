// // // // /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// // // // #include<bits/stdc++.h>
// // // // #define ll long long int

// // // // using namespace std;

// // // // int main(){
// // // //  int t;
// // // //  cin>>t;
// // // //  while(t--){
// // // //     priority_queue<int> a,b;
// // // //     int x;
// // // //     cin>>x;
// // // //     a.push(x);
// // // //     cin>>x;
// // // //     a.push(x);
// // // //     cin>>x;
// // // //     a.push(x);

// // // //     cin>>x;
// // // //     b.push(x);
// // // //     cin>>x;
// // // //     b.push(x);
// // // //     cin>>x;
// // // //     b.push(x);

// // // //     int n1=0, n2=0;
// // // //     while(!a.empty()){
// // // //         n1= n1*10 + a.top();
// // // //         n2= n2*10+ b.top();
// // // //         a.pop();
// // // //         b.pop();
// // // //     }
      
// // // //     if(n1>n2){
// // // //         cout<<"ALICE\n";
// // // //     }else if(n1<n2){
// // // //         cout<<"BOB\n";
// // // //     }else{
// // // //         cout<<"TIE\n";
// // // //     }
// // // //  }
// // // // return 0;
// // // // }


// // // // /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// // // // #include<bits/stdc++.h>
// // // // #define ll long long int

// // // // using namespace std;

// // // // int main(){
// // // //  int t;
// // // //  cin>>t;
// // // //  while(t--){
// // // //     ll n,m;
// // // //     cin>>n;
// // // //  }
// // // // return 0;
// // // // }



// // // #include <iostream>
// // // #include <string>
// // // #include <climits>

// // // int findM(int length, std::string N) {
// // //     // Check if N is already divisible by 8
// // //     if (std::stoi(N) % 8 == 0) {
// // //         return std::stoi(N);
// // //     }

// // //     // Find the minimum number of changes needed to make N divisible by 8
// // //     int minChanges = INT_MAX;
// // //     std::string M = N;

// // //     // Iterate through all possible pairs of digits in N
// // //     for (int i = 0; i < length; i++) {
// // //         for (int j = i + 1; j < length; j++) {
// // //             std::swap(M[i], M[j]); // Swap the digits at position i and j
// // //             if (std::stoi(M) % 8 == 0 && std::stoi(M) < minChanges) {
// // //                 minChanges = std::stoi(M);
// // //             }
// // //             std::swap(M[i], M[j]); // Revert the change
// // //         }
// // //     }

// // //     return minChanges;
// // // }

// // // int main() {
// // //     int T;
// // //     std::cin >> T;

// // //     for (int t = 0; t < T; t++) {
// // //         int length;
// // //         std::string N;
// // //         std::cin >> length >> N;

// // //         int M = findM(length, N);
// // //         std::cout << M << std::endl;
// // //     }

// // //     return 0;
// // // }


// // #include <iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// // double find(int x,int y,int v,int w){
    
    
// //     double ans = sqrt((x-v)*(x-v) + (y-w)*(y-w));
// //     return ans;
    
// // }

// // void sol(){
    
    
// //     int x,y,a1,a2,b1,b2;
// //     cin>>x>>y>>a1>>a2>>b1>>b2;
    
    
// //     double x1,x2,x3,x4,x5;
    
// //     x1 = find(x,y,a1,a2);
// //     x2 = find(x,y,b1,b2);
// //     x3 = find(0,0,a1,a2);
// //     x4 = find(0,0,b1,b2);
// //     x5 = find(a1,a2,b1,b2);
    
    
// //     // cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<x5<<endl;
    
// //     double p = max(min(x1,x2),min(x3,x4));
// //     if(min(x1,x2)==x1&&min(x3,x4)==x3){
        
// //     }
// //     else if(min(x1,x2)==x2&&min(x3,x4)==x4){
        
// //     }
// //     else{
// //         if(x5>2*p){
// //             p = x5/2;
// //         }
// //     }
    
// //     cout <<setprecision(11);
// //     cout<<p<<endl;
    
    
// //     return ;
    
    
// // }


// // int main() {
// //    int t;
// //    cin>>t;
// //    while(t--){
// //        sol();
// //    }
   
// //    return 0;
// // }


// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include<bits/stdc++.h>
// #define ll long long int

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while (t--)
//  {
//     /* code */
//     int n;
//     cin>>n;
//     string str;
//     cin>>str;
//     int v;
//     string temp1;
//     if(n==1)
//     cout<<8<<endl;
//     else{
//         if(n>=3)
//         temp1= str.substr(n-3,3);
//         else
//         temp1= str;
//         if(n>=3)
//         v= stoll(temp1);
//         else
//         v= stoll(str);

//         if(v%8==0){
//             cout<<str<<endl;
//         }else{
//             int rem= v%8;
//             if(v%10>=rem){
//                 v-= rem;
//             }else{
//                 v+= 8-rem;
//             }

//             string s2= "";
//             if(n>=3)
//             s2+= str.substr(0,n-3);
//             string temp= to_string(v);
//             reverse(temp.begin(), temp.end());
//             while(temp.size()!= temp1.size()){
//                 temp+= '0';
//             }

//             reverse(temp.begin(), temp.end());

//             s2+= temp;
//             cout<<s2<<"\n";

            
//         }

//     }
    
//  }
 
// return 0;
// }



/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n>>k;
    string str1;
    cin>>str1;
    vector<int> v1(k,0), v2(k,0);

    for(int i=0; i<n; i++){
        int index= i%k;
        if(str1[i]=='0'){
            v2[index]++;
        }else
        v2[index]++;

    }

    int a1= 0;
    int a2= 0;
    for(int i=0; i<k; i++){
        if(v1[i]&1){
            a1+= 1+ (v1[i]+1)/2;

        }else{
            a1+= (v1[i]/2);
        }
    }

    for(int i=0; i<k; i++){
        if(v1[i]==0){
            a2= INT_MAX;
            break;
        }else{
            a2+= v2[i];
        }
    }

    cout<<min(a1,  a2)<<endl;

 }
return 0;
}