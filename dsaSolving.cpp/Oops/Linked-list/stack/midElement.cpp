#include<iostream>
#include<stack>
#include<cmath>

using namespace std;

void solve(stack<int> & s, int index,int & ans){
    if(s.size()==index){
        ans= s.top();
        return;
    }
    //some operation---
    int temp= s.top();
    s.pop();
    solve(s, index,ans);
    s.push(temp);

    return;
}

int mid_element(stack<int> s, int index){
    int ans=-1;
    int size= s.size();
    solve(s, index,ans);

    return ans;
}

int main(){
 stack<int> s;
 int x;
 while(cin>>x){
    s.push(x);
 }
int midIndex= floor(s.size()/2);
 cout<<"mid element of stack"<<mid_element(s,midIndex)<<endl;
return 0;
}