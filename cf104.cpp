// // /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
	cin>>t;
	while(t--){
	    int aplha;
	    cin>>aplha;
	    int blabla[aplha];
	    int mini = INT_MAX;
	    int odd = 0,even = 0;

	    for(int i =0;i<aplha;i++){
	        cin>>blabla[i];
	        if(blabla[i]%2==0) even++;
	        else odd++;
	        mini = min(mini,blabla[i]);
	    }
	    int annoy = 0;
	    for(int i = 0;i<aplha;i++){
	        annoy += (blabla[i]-mini);
	    }
	    if(annoy%(aplha*2)==0 &&((odd==0 && even>0)||(odd>0 && even==0))) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    }
return 0;
}

// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include<bits/stdc++.h>
// #define ll long long int

// using namespace std;

// pair<int, int>solve(int N){
//  int numBits = 0;
//     int n= N;
//     while (n > 0) {
//         numBits++;
//         n >>= 1;
//     }

//     int x = (1 << numBits) - 1;
//     int y = N ^ x;

//     return std::make_pair(x, y);
// }

// int main(){
//  int t;
//  cin>>t;
//  while(t--){
//     int n;
//     cin>>n;
//     pair<int, int> p= solve(n);
//     cout<<p.first<<" "<<p.second<<"\n";
//  }
// return 0;
// }

// /* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
// #include <bits/stdc++.h>
// #define ll long long int

// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     int p1 = 0;
//     int temp = 0;
//     while (n > 0)
//     {
//         if (n % 2 == 1)
//         {
//             temp = temp or (1 << p1);
//         }
//         n =n/ 2;
//         p1 += 1;
//     }
//     cout << temp << " " << abs(~temp) << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    int num;
    cin>>num;
    cout<<num<<" "<<num-1<<"\n";
 }
return 0;
}