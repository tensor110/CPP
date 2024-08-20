#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

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

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    for(int r = 0; r<n; r++){
        ans.push_back(pascalRow(r));
    }
    return ans;
}

int main(){
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);

    cout << "Modified Matrix:\n";
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}