#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> spiralTraversal(vector<vector<int>> arr){
    int n = arr.size();
    int m = arr[0]. size();
    int left = 0;
    int right = m-1;
    int top = 0;
    int bottom = n-1;
    vector<int> ans;
    while(top<=bottom && left<=right){
        for(int i = left; i<=right; i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i = top; i<=bottom; i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i = right; i>=left; i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i = bottom; i>=top; i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    vector<int> ans = spiralTraversal(arr);

    cout << "Modified Matrix:\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
        cout << endl;
    return 0;
}