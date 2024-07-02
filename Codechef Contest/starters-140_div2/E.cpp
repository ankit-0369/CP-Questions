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


vector < int > find(const vector <int>& order) {
    vector < int > b(order.begin() + 1, order.end());
    reverse(b.begin(), b.end());
  
   loop(i,0,b.size()) b[i]++;
    return b;
}

vector < int > bfs(int n, unordered_map <int,vector <int>> & adj, vector < int > & wt, int min_wt_ind) {
    vector <int> order;
    vector < bool > vis(n, false);
    queue < int > q;

    q.push(min_wt_ind);
    vis[min_wt_ind] = true;
    order.push_back(min_wt_ind);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (int neighbor: adj[node]) {
            if (!vis[neighbor]) {
                vis[neighbor] = true;
                order.push_back(neighbor);
                q.push(neighbor);
            }
        }
    }

    return order;
}

void solve() {

    int n;
    cin >> n;
    unordered_map <int,vector <int>> adj;
    vector < int > a(n);
    loop(i,0,n) cin>>a[i];
    loop(i,0,n-1){
         int u, v;
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    int mini = min_element(a.begin(), a.end())-a.begin();
    vector <int> arr = bfs(n, adj, a, mini);
    vector <int> ans = find(arr);
    cout << ans.size() << "\n";
    loop(i,0,ans.size()){
        cout<<ans[i]<<" ";
    }
    cout << endl;
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