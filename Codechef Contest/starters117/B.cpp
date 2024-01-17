/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    string s;
    int n;
    cin>>n>>s;
    bool del=false;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>s[i+1]){
            s.erase(s.begin()+i);
            del=1;
            break;
        }
    }
    if(!del) s.pop_back();
    cout<<s<<"\n";
 }
return 0;
}