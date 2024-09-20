#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int countPartitions(vector<int> &arr, int pages) {
    int n = arr.size();
    int partitions = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < n; i++) {
        if (pagesStudent + arr[i] <= pages) {
            pagesStudent += arr[i];
        }
        else {
            partitions++;
            pagesStudent = arr[i];
        }
    }
    return partitions;
}

// Brute-force Solution
int largestSubarraySum(vector<int>& arr, int m) {
    int n = arr.size();
    if (m > n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    long long high = accumulate(arr.begin(), arr.end(), 0);
    for (int pages = low; pages <= high; pages++) {
        if (countPartitions(arr, pages) == m) {
            return pages;
        }
    }
    return low;
}

// Optimal Solution 
int largestSubarraySum(vector<int>& arr, int m) {
    int n = arr.size();
    if (m > n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int partitions = countPartitions(arr, mid);
        if (partitions > m) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    vector<int> arr = {25, 46, 28, 49, 24};
    int n = 5;
    int m = 4;
    int ans = largestSubarraySum(arr, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}