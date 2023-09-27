#include<conio.h>
#include<stdio.h>

int main(){

    int m,n;
    scanf("%d%d",&m,&n);
    int a1[m],a2[n];
    int res[m+n];
    int k=0;
    for(int i=0; i<m; i++){
        scanf("%d",&a1[i]);
        res[k++]=a1[i];
    }
    for(int i=0; i<n; i++){
        scanf("%d",&a2[i]);
        res[k++]= a2[i];
    }
    printf("\n");
    for(int i=0; i<m+n; i++){
        printf("%d ",res[i]);
    }
    return 0;
}