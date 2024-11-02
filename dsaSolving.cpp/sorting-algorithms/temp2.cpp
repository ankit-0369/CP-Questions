/* ------------ ॥ अंतः अस्ति प्रारंभः ॥-------    */
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
 char a[10]= "\\0\0\2bc";
 int i= 0;
 while(i<3){
    switch (a[i++])
    {
    case '\\':
        printf("this question is good\n");
        break;
    
    case 0: printf("this question is too good\n");
        break;

        default: printf("op predict\n");
    }
 }
return 0;
}