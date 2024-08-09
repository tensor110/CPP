#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int nCr(int row, int col){
    int ans = 1;
    if(col > row) return 0;
    if(col == 0 || col == row) return 1;
    for(int i = 0; i< col; i++){
        ans = ans * (row-i);
        ans = ans / (i+1);
    }
    return ans;
}

int main(){
    int row = 5;
    int col = 3;
    int ans = nCr(row, col);
    cout<<ans;
    cout << endl;
    return 0;
}