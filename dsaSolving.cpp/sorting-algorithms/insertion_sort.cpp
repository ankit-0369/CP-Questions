#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr){

    for(auto num : arr) cout<<num<<" ";
    cout<<endl;
    return;
}

void insertion_sort(vector<int>& arr){

    for(int i=0; i<arr.size(); i++){

        int key= arr[i], j= i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1]= arr[j];
            j--;
        }

        arr[j+1]= key;
    }

    return;
}

int main(){

    vector<int> arr{10,9,8,7,6,4,5,6,4,2, -3,4,-5};
    insertion_sort(arr);
    print(arr);
    return 0;
}