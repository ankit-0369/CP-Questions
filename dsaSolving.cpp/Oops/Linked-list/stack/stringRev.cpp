#include<iostream>
#include<stack>
using namespace std;

int main(){
 stack<char> st;
string s;
char c;
while(cin>>c){
    st.push(c);
}

while(!st.empty()){
    s.push_back(st.top());
    st.pop();
}

cout<<s<<endl;

return 0;
}