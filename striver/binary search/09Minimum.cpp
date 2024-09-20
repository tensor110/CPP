#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution  
int findMin(vector<int>& arr) {
    int n = arr.size();
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
    }
    return mini;
}

// Optimal solution 
int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        }
        if (arr[low] <= arr[mid]) {
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else {
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}
