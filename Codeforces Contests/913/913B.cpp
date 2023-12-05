

// #include <iostream>
// #include <vector>


// int main() {
//     int t;
//     std::cin >> t;

//     while (t--) {
//         std::string str;
//         std::cin >> str;

//         vector<int> lower, upper;
//         string la = "qwertyuiopasdfghjklzxcvbnm";
//         string ua = "QWERTYUIOPASDFGHJKLZXCVBNM";
//         std::vector<char> a;
//         std::string ans = "";
//         int c = 0;

//         for (int i = 0; i < str.length(); ++i) {
//             if (str[i] == 'B' && upper.size() > 0) {
//                 a[upper.back()] = '_';
//                 upper.pop_back();
//             } else if (str[i] == 'b' && lower.size() > 0) {
//                 a[lower.back()] = '_';
//                 lower.pop_back();
//             } else if (str[i] != 'b' && str[i] != 'B') {
//                 if (la.find(str[i]) != std::string::npos)
//                     lower.push_back(c);
//                 else
//                     upper.push_back(c);
//                 a.push_back(str[i]);
//                 c++;
//             }
//         }

//         for (char i : a) {
//             if (i != '_')
//                 ans += i;
//         }

//         std::cout << ans << std::endl;
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
    std::string str;
        std::cin >> str;

        vector<int> lower, upper;
        string la = "qwertyuiopasdfghjklzxcvbnm";
        string ua = "QWERTYUIOPASDFGHJKLZXCVBNM";
        std::vector<char> a;
        std::string ans = "";
        int c = 0;

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == 'B' && upper.size() > 0) {
                a[upper.back()] = '_';
                upper.pop_back();
            } else if (str[i] == 'b' && lower.size() > 0) {
                a[lower.back()] = '_';
                lower.pop_back();
            } else if (str[i] != 'b' && str[i] != 'B') {
                if (la.find(str[i]) != std::string::npos)
                    lower.push_back(c);
                else
                    upper.push_back(c);
                a.push_back(str[i]);
                c++;
            }
        }

        for (char i : a) {
            if (i != '_')
                ans += i;
        }

        std::cout << ans << std::endl;
 }
return 0;
}