#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution
int findPeakElement(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i - 1] < arr[i]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            return i;
        }
    }
    return -1;
}

// Optimal Solution 
int findPeakElement(vector<int> &arr) {
    int n = arr.size();
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;
    int low = 1, high = n - 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
            return mid;
        if (arr[mid] > arr[mid - 1]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int ans = findPeakElement(arr);
    cout << "The peak is at index: " << ans << "\n";
    return 0;
}