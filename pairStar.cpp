#include<iostream>


using namespace std;

string pairstar(string s){
    int n= s.size();
    if(n==1){
        return s;
    }
   char c= s[0];
   string small, res;
    auto it= s.begin();
    s.erase(it);
    small= pairstar(s);
    if(c==small[0]){
        res= c+small;
        res.insert(1,1,'*');
        
    }else{
        res= c+small;
    }

    return res;
}

int main(){
 string s;
 cin>>s;
 cout<<pairstar(s);
return 0;
}