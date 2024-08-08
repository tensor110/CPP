#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// void markRow(vector<vector<int>> &arr, int m, int i){
//     for(int j = 0; j < m; j++){
//         if(arr[i][j] != 0){
//             arr[i][j] = -1;
//         }
//     }
// }
// void markColumn(vector<vector<int>> &arr, int n, int j){
//     for(int i = 0; i < n; i++){
//         if(arr[i][j] != 0){
//             arr[i][j] = -1;
//         }
//     }
// }
// vector<vector<int>> setZeros(vector<vector<int>> &arr){
//     int n = arr.size();
//     int m = arr[0].size();
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(arr[i][j] == 0){
//                 markRow(arr, n, i);
//                 markColumn(arr, m, j);
//             }
//         }
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(arr[i][j] == -1){
//                 arr[i][j] = 0;
//             }
//         }
//     }
//     return arr;
// }

// Better Solution 
// vector<vector<int>> setZeros(vector<vector<int>> &arr){
//     int n = arr.size();
//     int m = arr[0].size();
//     vector<int> col(m, 0);
//     vector<int> row(n, 0);
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(arr[i][j] == 0){
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < m; j++){
//             if(row[i] || col[j]){
//                 arr[i][j] = 0;
//             }
//         }
//     }
//     return arr;
// }

// Optimal Solution 
vector<vector<int>> setZeros(vector<vector<int>> &arr){
    int n = arr.size();
    int m = arr[0].size();
    int col0 = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                if(j != 0)  arr[0][j] = 0;
                else    col0 = 0;
            }
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(arr[i][j] != 0){
                if(arr[0][j] == 0 || arr[i][0] == 0){
                    arr[i][j] = 0;
                }
            }
        }
    }
    return arr;
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };

    vector<vector<int>> ans = setZeros(arr);

    cout << "Modified Matrix:\n";
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}