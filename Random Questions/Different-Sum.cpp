#include<iostream>

using namespace std;
void print(int ** a,int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void search(int** a, int m, int n, int target){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==target){
            cout<<"found\n";
                return;
            }
        }
    }
    cout<<"not found\n";
}

void rowWiseSum(int ** a, int m, int n){
    for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            sum+= a[i][j];
        }
        printf("sum of %dth row : %d\n",i+1,sum);
    }
}
void colWise(int ** a, int m, int n){
    for(int i=0; i<n; i++){
       int sum=0;
        for(int j=0; j<m; j++){
            sum+= a[j][i];
        }
        printf("sum of %dth col : %d\n",i+1, sum);
    }
}

void DiagSum(int **a, int m, int n){

   int sum=0;
    for(int i=0; i<m; i++){

       
        for(int j=0; j<n; j++){
            if(i==j)
                sum+= a[i][j];
        }
    }
    cout<<"Sum of diagonal elements of given matrix : "<<sum<<endl;
}

void Transpose(int **a,int m, int n){
    int **trans= new int*[n];
    for(int i=0; i<n; i++){
        trans[i]= new int[m];//creating n×m dynamic array

    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            trans[i][j]= a[j][i];
        }
        
    }
    print(trans,n,m);
}

int main(){
 int row,col;
 cin>>row>>col;
 int **arr= new int*[row];
for(int i=0; i<row; i++){
    arr[i]= new int [col];//arr[i] is ith array of arr. basically we are storing address of col array in to pointer of pointer

}
for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cin>>arr[i][j];
    }
}
//searching..
int target;
cin>>target;
print(arr,row,col);
search(arr,row,col,target);
//row-wise-sum..
rowWiseSum(arr,row,col);
//column-wise-sum------
cout<<"----Now column wise Sum-----\n";
colWise(arr,row,col);
cout<<"------Now diagonal elements sum------\n";
DiagSum(arr,row,col);
cout<<"--------Printing transpose of Given Matrix------\n";
Transpose(arr,row,col);


for(int i=0; i<row; i++){
    delete [] arr[i];
}
delete []arr;
return 0;
}