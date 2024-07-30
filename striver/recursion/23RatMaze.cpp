#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int i, int j, int n, vector<vector<int>> &m, vector<string> &ans, string move, vector<vector<int>> &vis){
    if(i == n-1 && j == n-1){
        ans.push_back(move);
        return;
    }

    // Downward 
    if(i+1<n && !vis[i+1][j] && m[i+1][j] == 1){
        vis[i][j] = 1;
        solve(i+1, j, n, m, ans, move + 'D', vis);
        vis[i][j] = 1;
    }

    // Left
    if(j-1>=0 && !vis[i][j-1] && m[i][j-1] == 1){
        vis[i][j] = 1;
        solve(i, j-1, n, m, ans, move + 'L', vis);
        vis[i][j] = 1;
    }

    // Right
    if(j+1<n && !vis[i][j+1] && m[i][j+1] == 1){
        vis[i][j] = 1;
        solve(i, j+1, n, m, ans, move + 'R', vis);
        vis[i][j] = 1;
    }

    // Upward
    if(i-1>=0 && !vis[i-1][j] && m[i-1][j] == 1){
        vis[i][j] = 1;
        solve(i-1, j, n, m, ans, move + 'U', vis);
        vis[i][j] = 1;
    }
}

vector<string> ratMaze(int n, vector<vector<int>> &m){
    vector<vector<int>> vis(n, vector<int> (n, 0));
    vector<string> ans;
    if(m[0][0] == 1)
        solve(0, 0, n, m, ans, "", vis);
    return ans;
}