#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr){

    for(auto num : arr) cout<<num<<" ";
    cout<<endl;
    return;
}
void bubble_sort(vector<int>& arr){
    int n= arr.size();
    for(int i=0; i<n-1; i++){

        bool swapped= false;

        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped= true;
            }
        }
        if(!swapped) break; 

    }

    return;
}
int main(){

     vector<int> arr{10,9,8,7,6,4,5,6,4,2, -3,4,-5};
     bubble_sort(arr);
    print(arr);
    return 0;
}