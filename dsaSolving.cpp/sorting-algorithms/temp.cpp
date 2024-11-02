#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& arr) {
    for (auto num : arr) cout << num << " ";
    cout << endl;
}

void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> left(arr.begin() + start, arr.begin() + mid + 1);
    vector<int> right(arr.begin() + mid + 1, arr.begin() + end + 1);
    int left_ptr = 0, right_ptr = 0, merged_ptr = start;

    while (left_ptr < left.size() && right_ptr < right.size()) {
        if (left[left_ptr] <= right[right_ptr]) {
            arr[merged_ptr++] = left[left_ptr++];
        } else {
            arr[merged_ptr++] = right[right_ptr++];
        }
    }

    while (left_ptr < left.size()) {
        arr[merged_ptr++] = left[left_ptr++];
    }

    while (right_ptr < right.size()) {
        arr[merged_ptr++] = right[right_ptr++];
    }
}

void solve(vector<int>& arr, int start, int end) {
    if (start >= end) return;
    int mid = start + (end - start) / 2;
    solve(arr, start, mid);
    solve(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void merge_sort(vector<int>& arr) {
    int s = 0, e = arr.size() - 1;
    solve(arr, s, e);
}

int main() {
    vector<int> arr{10, 9, 8, 7, 6, 4, 5, 6, 4, 2, -3, 4, -5};
    merge_sort(arr);
    print(arr);
    return 0;
}
