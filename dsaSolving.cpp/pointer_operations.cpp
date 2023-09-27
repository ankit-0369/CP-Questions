#include<bits/stdc++.h>

using namespace std;

void print(int* a, int size){
    //cout<<a[0]<<endl;
    for(int i=0; i<size; i++){
        cout<<i[a]<<"\t";
    }
}
int main(){

 int i=9;
 int* p= &i;
 cout<<*p<<"\t"<<&p<<endl;
 p++;
 cout<<*p<<"\t"<<p<<endl;
 char* c;
 double* d;
 cout<<sizeof(c)<<"\t"<<sizeof(d)<<endl;
 p= p+1;
 cout<<p<<endl;
 int a[10];
 a[0]= 20;
 p= a+1;
 cout<<p<<endl;

 cout<<a<<endl;
 //a= a+1;

//system("color 0a");
 //character pointer.
 char ca[]= "agradgrdn";
 char* pc= &ca[0];
 cout<<pc<<"\t"<<*pc<<"\t"<<&pc<<endl;


char r= '#';
char* pr= &r;
cout<<r<<"\t"<<pr<<"\t"<<*pr<<"\t"<<&pr<<endl;

int *wo= 0;//null pointer initialization
cout<<wo;

char sd[]="hello";
char* psd= &sd[2];
cout<<psd<<"\t"<<sd[0];
//pointers and functions


int arr[]={1,2,3,5,4,6};
cout<<"\n"<<arr[0]<<endl;
print(arr+2,5);
return 0;
}