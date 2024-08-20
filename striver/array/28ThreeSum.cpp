#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

// Brute-force Solution 
// vector<vector<int>> threeSum(vector<int> arr, int target){
//     int n = arr.size();
//     set<vector<int>> st;
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int sum = 0;
//             for(int k = j+1; k<n; k++){
//                 sum = arr[i] + arr[j] + arr[k];
//                 if(sum == target){
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// Better Solution 
// vector<vector<int>> threeSum(vector<int> arr, int target){
//     int n = arr.size();
//     set<vector<int>> st;
//     for (int i = 0; i < n; i++) {
//         set<int> hashset;
//         for (int j = i + 1; j < n; j++) {
//             int third = -(arr[i] + arr[j]);
//             if (hashset.find(third) != hashset.end()) {
//                 vector<int> temp = {arr[i], arr[j], third};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }

// Optimal Solution 
vector<vector<int>> threeSum(vector<int> arr, int target){
    int n = arr.size();
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (i != 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0) {
                j++;
            }
            else if (sum > 0) {
                k--;
            }
            else {
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,-1,0,2,2,3,3,3}; 
    int target = 0;
    vector<vector<int>> ans = threeSum(arr, target);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}