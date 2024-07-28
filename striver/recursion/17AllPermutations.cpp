#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute-force Solution 
// void allPermutations(vector<int> arr, int n, vector<int> &freq, vector<int> &ds, vector<vector<int>> &ans){
//     if(ds.size() == n){
//         ans.push_back(ds);
//         return;
//     }
//     for(int i = 0; i<n; i++){
//         if(!freq[i]){
//             ds.push_back(arr[i]);
//             freq[i] = 1;
//             allPermutations(arr, n, freq, ds, ans);
//             freq[i] = 0;
//             ds.pop_back();
//         }
//     }
// }

// Optimal Solution 
void allPermutations(vector<int> arr, int n,int idx, vector<vector<int>> &ans){
    if(idx == n){
        ans.push_back(arr);
        return;
    }
    for(int i = idx; i<n; i++){
        swap(arr[idx], arr[i]);
        allPermutations(arr, n, idx+1, ans);
        swap(arr[idx], arr[i]);
    }
}

int main(){
    vector <int> arr = {1,2,3};
    int n = arr.size();
    vector<vector<int>> ans;

    allPermutations(arr, n, 0, ans);
    for (const auto& subseq : ans) {
        cout << "{ ";
        for (int val : subseq) {
            cout << val << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}