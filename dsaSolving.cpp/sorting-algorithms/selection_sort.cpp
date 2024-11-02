#include<iostream>
#include<vector>

using namespace std;

void selection_sort(vector<int>& arr){
    int n= arr.size();
    for(int i= 0; i+1<n; i++){
        int min_elem_idx= i;
        for(int j= i+1; j<n; j++){

            if(arr[j] < arr[min_elem_idx]){
                min_elem_idx= j;
            }
        }

        if(i!= min_elem_idx){
            swap(arr[i], arr[min_elem_idx]);
        }
    }

    return;
}

void print(vector<int>& arr){

    for(auto num : arr) cout<<num<<" ";
    cout<<endl;
    return;
}
int main(){
      vector<int> arr{10,9,8,7,6,4,5,6,4,2, -3,4,-5};
        selection_sort(arr);
        print(arr);
    return 0;
}