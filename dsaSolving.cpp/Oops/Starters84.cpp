#include<bits/stdc++.h>

using namespace std;

// void solve1(){
//  int x,y;
//  cin>>x>>y;
//  cout<<abs(x-y)<<"\n";
// }

// void solve2(){
//     int n,x;
//     cin>>n>>x;
//     int age[n];
//     int cnt=0;
//     for(int i=0; i<n; i++){
//         cin>>age[i];
//         if(age[i]>=x){
//             cnt++;
//         }
//     }

//     cout<<cnt<<"\n";
// }

// void solve3(){
//     int x,y;
//     cin>>x>>y;
//     int cnt=0;
//     for(int i=1; y<x; i++){
//         y+= i;
//         cnt++;
//     }
//     cout<<cnt<<"\n";
// 
// }

// void solve4(){
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     if(s[0]=='1'){
//         while(k!=0){
//             s.push_back('0');
//             k--;
//         }
//     }else{
//         s[0]='1';
//         k--;
//         while(k!=0){
//             s.push_back('0');
//             k--;
//         }
//     }

//     cout<<s<<endl;
// }

void solve5(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string x1,x2;
    x1.push_back('0');
    x2.push_back('1');
    for(int i=1; i<n; i++){
        int r= (x1[i-1]-'0')^(s[i-1]-'0');
        char c= r+'0';
        x1.push_back(c);
    }
     for(int i=1; i<n; i++){
        int r= (x2[i-1]-'0')^(s[i-1]-'0');
        char c= r+'0';
        x2.push_back(c);
    }
    int ct1=0, ct2=0;
    for(int i=0; i<n; i++){
        if(x1[i]=='1'){
            ct1++;
        }
        if(x2[i]=='1'){
            ct2++;
        }
    }
    
    cout<<max(ct1,ct2)<<endl;
}

bool solve6(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i]= a[i];
    }
    sort(b,b+n);
    int z= b[n-1]+b[n-2];
    swap(b[0],b[n-1]);
    for(int i=0; i+1<n; i++){
        if(b[i]+b[i+1]>=z){
            return false;
        }
    }
        return true;
}

int main(){
ios::sync_with_stdio(0);
cin.tie(0);
 int t;
 cin>>t;
 while(t--){
    // solve1();
    // solve2();
    // solve3();
    // solve4();
    // solve5();
    if(solve6()){
        cout<<"YES\n";
    }else
    cout<<"NO\n";
 }
return 0;
}