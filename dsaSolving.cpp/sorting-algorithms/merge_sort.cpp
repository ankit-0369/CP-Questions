#include<iostream>
#include<vector>
using namespace std;


void print(vector<int>& arr){

    for(auto num : arr) cout<<num<<" ";
    cout<<endl;
    return;
}


void merge(vector<int>& arr, int start, int mid, int end){
    // 1. create temp left and right array.
    //2. copy the content of left part[start...mid] and right part[mid+1 ... end]
    //3. create new merged_array. 
    //4. Take smallest element of left and right and put it in the merged_array.
    //5. Increase the ptr of corresponding part.

    vector<int> left, right;
    for(int i= start; i<=mid; i++){
        left.push_back(arr[i]);
    }

    for(int i= mid+1; i<=end; i++){
        right.push_back(arr[i]);
    }
    //   vector<int> left(arr.begin() + start, arr.begin() + mid + 1);
    // vector<int> right(arr.begin() + mid + 1, arr.begin() + end + 1);
    int left_ptr= 0, right_ptr= 0, merged_ptr= start;
    int cnt= 0;
    while (left_ptr < left.size() && right_ptr < right.size())
    {
        /* code */

        if(left[left_ptr] <= right[right_ptr]){

            arr[merged_ptr]= left[left_ptr++];
        }else{
            arr[merged_ptr]= right[right_ptr++];
       
        }

        merged_ptr++;
    }
    

      while (left_ptr < left.size()) {
        arr[merged_ptr++] = left[left_ptr++];
    }

    while (right_ptr < right.size()) {
        arr[merged_ptr++] = right[right_ptr++];
    }
    
    return;
    

}

void solve(vector<int>& arr, int start, int end){
    if(start >= end) return;
    int mid= start+ (end-start)/2;

    solve(arr, start, mid);
    solve(arr, mid+1, end);
    merge(arr, start, mid, end);
    return;
}

void merge_sort(vector<int>& arr){

    int s= 0, e= arr.size()-1;
    solve(arr, s, e);

}

int main(){
    vector<int> arr{10,9,8,7,6,4,5,6,4,2, -3,4,-5};
    merge_sort(arr);
    print(arr);
    return  0;
}