#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include <climits>
using namespace std;

// Better Solution 
// int maximumSum(vector<int> arr){
//     int n = arr.size();
//     int maxi = INT_MIN;
//     for(int i = 0; i<n; i++){
//         int sum = 0;
//         for(int j = i; j<n; j++){
//             sum += arr[j];
//             maxi = max(maxi, sum);
//         }
//     }
//     return maxi;
// }

// Optimal Solution 
int maximumSum(vector<int> arr){
    int n = arr.size();
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
        if(maxi < sum)  maxi = sum;
        if(sum < 0) sum = 0;
    }
    return maxi;
}

// To return the subarray of maximum sum 
// vector<int> maximumSum(vector<int> arr){
//     int n = arr.size();
//     vector<int> ans;
//     int maxi = INT_MIN;
//     int sum = 0;
//     int ansStart = -1;
//     int ansEnd = -1;
//     int start = 0;
//     for(int i = 0; i<n; i++){
//         sum += arr[i];
//         if(sum == 0) start = i;
//         if(maxi < sum){
//             maxi = sum;
//             ansStart = start;
//             ansEnd = i;
//         }
//         if(sum < 0) sum = 0;
//     }
//     for(int i = ansStart; i< ansEnd; i++){
//         ans.push_back(arr[i]);
//     }
//     return ans;
// }


int main(){
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ans = maximumSum(arr);
    cout<<ans;
    cout << endl;
    return 0;
}