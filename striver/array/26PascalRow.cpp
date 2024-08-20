#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// int nCr(int row, int col){
//     int ans = 1;
//     if(col > row) return 0;
//     if(col == 0 || col == row) return 1;
//     for(int i = 0; i< col; i++){
//         ans = ans * (row-i);
//         ans = ans / (i+1);
//     }
//     return ans;
// }
// vector<int> pascalRow(int row){
//     vector<int> ans;
//     for(int c = 0; c<=row;c++){
//         ans.push_back(nCr(row,c));
//     }
//     return ans;
// }

// Optimal Solution 
vector<int> pascalRow(int row){
    vector<int> ans;
    int x = 1;
    ans.push_back(1);
    for(int c = 1; c<=row;c++){
        x = x * (row - c + 1);
        x = x / (c);
        ans.push_back(x);
    }
    return ans;
}

int main(){
    int row = 5;
    vector<int> ans = pascalRow(row);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}