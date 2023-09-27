#include<bits/stdc++.h>

using namespace std;

int solve(){
    int n;
    cin>>n;
    int week[7];
   int sum=0;
    for(int i=0; i<7; i++){
         cin>>week[i];
         sum+= week[i];
    }

    int leftPage= n%sum;
    int cur=0;
    int ans=0;
    if(leftPage==0){
            for(int i=6; i>=0; i--){
                if(week[i]!=0){
                    ans= i+1;
                    break;
                }
            }
    }else{
        for(int i=0; i<7; i++){
            if(cur+ week[i]>=leftPage){
                return i+1;
            }else
            cur+= week[i];

        }
    }

   return ans;
}

int main(){
 cout<<solve()<<endl;
return 0;
}