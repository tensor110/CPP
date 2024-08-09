#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

// Brute-force Solution 
// int countSubarray(vector<int> arr, int k){
//     int n = arr.size();
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         for(int j = i; j<n; j++){
//             int sum = 0;
//             for(int k = i; k<=j; k++){
//                 sum += arr[k];
//             }
//             if(sum == k){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

// Better Solution 
// int countSubarray(vector<int> arr, int k){
//     int n = arr.size();
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += arr[j];
//             if(sum == k)
//                 count++;
//         }
//     }
//     return count;
// }

// Optimal Solution 
int countSubarray(vector<int> arr, int k){
    int n = arr.size();
    map<int, int> mpp;
    int preSum = 0;
    int count = 0;
    mpp[0] = 1;
    for(int i = 0; i< n; i++){
        preSum +=arr[i];
        int remain = preSum - k;
        count += mpp[remain];
        mpp[preSum] += 1;
    }
    return count;
}

int main(){
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    int ans = countSubarray(arr, k);
    cout<<ans;
    cout << endl;
    return 0;
}