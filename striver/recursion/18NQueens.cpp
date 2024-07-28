#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void queen(int col, int n, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftRow, vector<int> &upperDiagonal, vector<int> &lowerDiagonal){
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row = 0; row<n; row++){
        if(leftRow[row] == 0 && upperDiagonal[n-1+col-row] == 0 && lowerDiagonal[row+col] == 0){
            board[row][col] = 'Q';
            leftRow[row] = 1;
            upperDiagonal[n-1+col-row] = 1;
            lowerDiagonal[row+col] = 1;
            queen(col+1, n, board, ans, leftRow, upperDiagonal, lowerDiagonal);
            board[row][col] = '.';
            leftRow[row] = 0;
            upperDiagonal[n-1+col-row] = 0;
            lowerDiagonal[row+col] = 0;
        }
    }
}

int main(){
    int n = 4;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> ans;
    vector <int> leftRow(n, 0), upperDiagonal(2*n - 1, 0), lowerDiagonal(2*n - 1, 0);

    queen(0, n, board, ans, leftRow, upperDiagonal, lowerDiagonal);
    for (const auto& solution : ans) {
        cout << "{\n";
        for (const auto& row : solution) {
            cout << " " << row << "\n";
        }
        cout << "}\n";
    }
    return 0;
}