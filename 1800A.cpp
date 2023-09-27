// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int n;
//     string s;
//     cin>>n;
//     cin>>s;
//      transform(s.begin(), s.end(), s.begin(), ::tolower);
//     string target= "meow";
   
//     int k=0;
//     string s1;

   
//     for(int i=0; i+1<n; i++){
//         if(s[i]!= s[i+1])
//             s1.push_back(s[i]);
//     }
//     s1.push_back(s[n-1]);
//     // cout<<s1<<" " <<target<<endl;
//     if(s1==target)
//     cout<<"YES\n";
//     else
//     cout<<"NO\n";
//     }
   

 

// return 0;
// }

#include<bits/stdc++.h>

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int k,n;
    cin>>n>>k;
    int low[26]={0};
    int up[26]={0};
    string s;
    cin>>s;
    // sort(s.begin(), s.end());
    // cout<<s<<"\n";
    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z')
        low[s[i]-'A']++;
        else
        up[s[i]-'a']++;
        }
        int res=0;
        for(int i=0; i<26; i++){
            if(low[i]!=0 && up[i]!=0){
                res+= min(low[i],up[i]);
                low[i]-= min(low[i],up[i]);
                up[i]-= min(low[i],up[i]);
            }
        }
        int j=0;
       while(k!=0 && j<26){
         for(int i=0; (i<26&& k!=0 ); i++){
            if(up[i]>1){
                res++;
                up[i]-= 2;
                k--;
            }
            if(low[i]>1){
                res++;
                low[i]-= 2;
                k--;
            }
            j++;
        }
       }

        cout<<res<<"\n";
 }
return 0;
}