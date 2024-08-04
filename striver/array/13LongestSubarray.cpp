#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// int longestSubarray(vector<int> arr, int k){
//     int n = arr.size();
//     int len = 0;
//     for(int i = 0; i< n;i++){
//         for(int j = i; j<n; j++){
//             int sum = 0;
//             for(int k = i; k<=j; k++){
//                 sum += arr[k];
//             } 
//             if(sum == k){
//                 len = max(len, j-i+1);
//             }   
//         }
//     }
//     return len;
// }

// int longestSubarray(vector<int> arr, int k){
//     int n = arr.size();
//     int len = 0;
//     for(int i = 0; i< n;i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += arr[j];
//             if(sum == k)
//                 len = max(len, j-i+1);   
//         }
//     }
//     return len;
// }

// Better Solution 
// int longestSubarray(vector<int> arr, int k){
//     int n = arr.size();
//     int maxLen = 0;
//     int sum = 0;
//     map<long long, int> mpp;
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//         if(sum == k){
//             maxLen = max(maxLen, i+1);
//         }
//         long long rem = sum - k;
//         if(mpp.find(rem) != mpp.end()){
//             int len = i - mpp[rem];
//             maxLen = max(maxLen, len);
//         }
//         if(mpp.find(sum) == mpp.end())
//             mpp[sum] = i;
//     }
//     return maxLen;
// }

// Optimal Solution 
int longestSubarray(vector<int> arr, int k){
    int n = arr.size();
    int maxLen = 0;
    int sum = 0;
    int right = 0;
    int left = 0;
    while (right < n) {
        sum += arr[right];
        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main(){
    vector<int> arr1 = {1,2,3,1,1,1,1,4,2,3};
    int k = 3;
    int ans = longestSubarray(arr1, k);
    cout<<ans;
    return 0;
}