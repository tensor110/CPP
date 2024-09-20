#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution
// int lowerBound(vector<int> arr, int n, int x) {
//     for (int i = 0; i < n; i++) {
//         if (arr[i] >= x) {
//             return i;
//         }
//     }
//     return n;
// }

// Optimal Solution 
int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 20;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}

