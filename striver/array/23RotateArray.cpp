#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// vector<vector<int>> rotateArray(vector<vector<int>> arr){
//     int n = arr. size();
//     int m = arr[0]. size();
//     vector<vector<int>> ans(m, vector<int>(n));
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<m; j++){
//             ans[j][n - 1 - i] = arr[i][j];
//         }
//     }
//     return ans;
// }

// Optimal Solutin 
vector<vector<int>> rotateArray(vector<vector<int>> arr){
    int n = arr. size();
    int m = arr[0]. size();
    for(int i = 0; i<n-1; i++){
        for(int j = i + 1; j<m; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i = 0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
    return arr;
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<vector<int>> ans = rotateArray(arr);

    cout << "Modified Matrix:\n";
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}