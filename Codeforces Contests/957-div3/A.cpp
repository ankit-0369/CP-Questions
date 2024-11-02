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
        priority_queue <int, vector<int>, greater<int> >m; 
        for(int i=0; i<3; i++){
            int x; cin>>x;
            m.push(x);
        }

        int cnt=5;
      
        while(cnt--)
        {
            int temp=m.top();
            m.pop();
            temp++;
            m.push(temp);
            
        }
        int ans=1;
        while(!m.empty()){
          ans=ans*m.top();
            m.pop();
        }
        cout<<ans<<"\n";

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