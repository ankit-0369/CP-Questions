#include <bits/stdc++.h>

using namespace std;

int main() {
 
 int t;
 cin>>t;
 while(t--){
     int n,x1,y1,x2,y2;
     cin>>n>>x1>>y1>>x2>>y2;
     int nc;
     nc= abs(x2-x1)+ abs(y2-y1);
     //int mcost= min(abs(n+1-x2), abs(n+1-y2), x2, y2)+ min(abs(n+1-x1), abs(n+1-y1), x1,y1);
        int nc1= min(abs(n+1-x2), abs(n+1-y2));
        int nc2= min(x2,y2);
        int nc3= min(abs(n+1-x1), abs(n+1-y1));
        int nc4= min(x1,y1);
        int cost= min(nc1,nc2) + min(nc3, nc4);
        cout<<min(nc, cost)<<"\n";
     //int cost= min(mcost,cost1);
     
 }
 
	return 0;
}
