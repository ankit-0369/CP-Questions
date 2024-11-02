
/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int solve(vector<int> level, int mxs){
    int n= level.size();
    sort(level.begin(), level.end());
    int l=0, r= 0, cnt= 0;
    while(l<n && r<n){
        if(level[r]-level[l] <= mxs){
            r++;
        }else{
             l= r;
            cnt++;
        }
    }

    return cnt;
}

int main(){
 
return 0;
}