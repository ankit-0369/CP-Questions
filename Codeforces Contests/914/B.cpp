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



int minimumElements(vector<int> &nums, int x) {

    int n= nums.size();


    vector<int> prev(x+1,0), cur(x+1, 0);

  for(int t=0; t<=x; t++){
   
    prev[t]= (t%nums[0]==0) ? t/nums[0] : 1e9;

  }


  for(int i=1; i<n; i++){
      for(int t=0; t<= x; t++){
        int noTake= prev[t];
        int take= (nums[i]<=t) ? 1+cur[t-nums[i]] : 1e9;
        cur[t]= min(take, noTake);
      }

      prev= cur;
  }
    int ans= prev[x];

    if(ans>=1e9) ans= -1;

    return ans;
}


 

void solve(){
 int n;
 cin>>n;
//  vector<int> coins{1,3,6,10,15};
// int ans= minimumElements(coins, n);
// cout<<ans<<"\n";

vector<int> coins = {15, 10, 6, 3, 1}; 

    int count = 0;
    for (int coin : coins) {
        while (n >= coin) {
            n -= coin;
            count++;
        }
    }

    cout<<count<<"\n";
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