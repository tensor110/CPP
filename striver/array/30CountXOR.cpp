#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// Brute-force Solution 
// int subarraysWithXorK(vector<int> arr, int k) {
//     int n = arr.size();
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int xorr = 0;
//             for (int K = i; K <= j; K++) {
//                 xorr = xorr ^ arr[K];
//             }
//             if (xorr == k) count++;
//         }
//     }
//     return count;
// }

// Better Solution
// int subarraysWithXorK(vector<int> arr, int k) {
//     int n = arr.size();
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         int xorr = 0;
//         for (int j = i; j < n; j++) {
//             xorr = xorr ^ arr[j];
//             if (xorr == k) count++;
//         }
//     }
//     return count;
// }

// Optimal Solution 
int subarraysWithXorK(vector<int> arr, int k) {
    int n = arr.size();
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++; //setting the value of 0.
    int count = 0;
    for (int i = 0; i < n; i++) {
        xr = xr ^ arr[i];
        int x = xr ^ k;
        count += mpp[x];
        mpp[xr]++;
    }
    return count;
}

int main(){
    vector<int> arr = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(arr, k);
    cout<<ans;
    cout << endl;
    return 0;
}