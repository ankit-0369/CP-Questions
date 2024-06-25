#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
void print(vector<int>& a);
vector<int> countingSort(vector<int> a){
    int n= a.size();
    vector<int> op(n, -1);
    // int maxi= *max_element(a.begin(), a.end());
    // cout<<maxi<<"\n";
    // vector<int> cnt(maxi+1, 0);
    map<int, int> cnt;

    for(auto num : a) cnt[num]++;
    // print(cnt);
    //taking cummulative sum---
    int sum= 0;
    for(auto it= cnt.begin(); it!= cnt.end(); it++){
        sum+= it->second;
        it->second= sum;
    }
    int i= n-1;
    while(i>=0){
        op[cnt[a[i]] - 1]= a[i];
        cnt[a[i]]--;
        i--;
    }

    return op;

}

void print(vector<int>& arr){
    for(auto num : arr) cout<<num<<" ";
    cout<<"\n";
    return;
}
int main(){
    // vector<int> a{1,2,4,5,2,45,645,26,56,30};
    vector<int> a{-10, -1, -2, -3, -4, 5, 6, 9};
    vector<int> ans= countingSort(a);
    
    print(ans);
    return 0;
}
