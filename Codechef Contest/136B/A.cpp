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

void solve(){
 string s;
        cin>>s;
        int count=0;
        
        for(int i=0;i<4;i++)
        {
            if(s[i]=='1')
            count++;
        }
        
        if(count==0)
        cout<<"0"<<endl;
        
        else if(count==1)
        cout<<"11"<<endl;
        
        else if(count==2 && s[0]=='1' && s[1]=='1' || count==2 && s[2]=='1' && s[3]=='1')
        cout<<"21"<<endl;
        
        else if(count==3)
        cout<<"231"<<endl;
        
        else if(count==4)
        cout<<"441"<<endl;
        
        else
        cout<<"121"<<endl;

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