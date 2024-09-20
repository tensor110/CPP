#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
int findKRotation(vector<int> &arr) {
    int n = arr.size();
    int ans = INT_MAX, index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < ans) {
            ans = arr[i];
            index = i;
        }
    }
    return index;
}

// Optimal Solution 
int findKRotation(vector<int> &arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    int index = -1;
    while (low <= high) {
        int mid = (low + high) / 2;ace:
        if (arr[low] <= arr[high]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            break;
        }
        if (arr[low] <= arr[mid]) {
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }
            low = mid + 1;
        }
        else {
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return index;
}

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findKRotation(arr);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}
