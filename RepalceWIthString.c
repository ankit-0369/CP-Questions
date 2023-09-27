#include<conio.h>
#include<stdio.h>
#include<string.h>
int main(){
    char ps[112];
    char c;
    char s[10];
   scanf("%s",&ps);

    scanf("%c",&c);
    scanf("%s",&s);

    for(int i=0; i<strlen(ps); i++){
        if(ps[i]==c){
            int k=0;
            for(int j=i+1; j<strlen(s); j++){
                    ps[strlen(ps)-j+strlen(s)]= ps[j];
                    ps[j-1]= s[k++];
            }
            break;
        }
    }
    printf("\n%s", ps);

}