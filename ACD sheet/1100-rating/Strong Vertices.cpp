    /*
    ======================================================================== 
    ------------------------------- ॥  अहं ब्रह्मास्मि !  ॥--------------------------
    =========================================================================
    */
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
    #define all(v)   v.begin(), v.end()
    #define rall(v)   v.rbegin(), v.rend() 
    #define PI 3.1415926535897932384626433832795

    using namespace std;

    void solve(){
    lli n; cin>>n;
    lli a[n], b[n];
    for(auto &x: a) cin>>x;
    for(auto &x:b) cin>>x;
    lli cnt= 0, mx= -1e10+7;
    for(lli i=0; i<n; i++){
        mx= max(mx, (a[i]-b[i]));
    }
    for(lli i=0; i<n; i++){
        if(a[i]-b[i] == mx) cnt++;
    }
    cout<<cnt<<"\n";
    for(lli i=0; i<n; i++){
        if(a[i] - b[i] == mx) cout<<i+1<<" ";

    }

    cout<<endl;
    

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