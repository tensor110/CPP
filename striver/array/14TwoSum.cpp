#include<iostream>
#include<vector>
#include<map>
#include<utility> // for pair
#include<algorithm>
using namespace std;

// Brute-force Solution 
// pair<int, int> twoSum(vector<int> arr, int target){
//     int n = arr.size();
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[i]+ arr[j] == target){
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }

// Better Solution 
// pair<int, int> twoSum(vector<int> arr, int target){
//     int n = arr.size();
//     map<int, int> mpp;
//     for(int i = 0; i < n; i++){
//         int x = arr[i];
//         int y = target - arr[i];
//         if(mpp.find(y) != mpp.end())
//             return {i, mpp[y]};
//         mpp[x] = i;
//     }
//     return {-1, -1};
// }

// Optimal Solution(Only for return Yes or No)
string twoSum(vector<int> arr, int target){
    int n = arr.size();
    int left = 0;
    int right = n-1;
    while(left<right){
        int sum= arr[left]+ arr[right];
        if(sum == target)
            return "Yes";
        else if(sum < target)
            left++;
        else
            right--;
    }
    return "No";
}

int main(){
    vector<int> arr1 = {2, 6, 5, 8, 11};
    int target = 14;
    // pair<int, int> ans = twoSum(arr1, target);
    
    // if (ans.first != -1 && ans.second != -1) {
    //     cout << "Indices: " << ans.first << ", " << ans.second << endl;
    // } else {
    //     cout << "No valid pair found" << endl;
    // }

    // Optimal
    string ans = twoSum(arr1, target);
    cout<<ans;
    return 0;
}