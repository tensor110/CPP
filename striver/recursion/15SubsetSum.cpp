#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsetSum(vector<int> arr, int n, int idx, int sum, vector<int> &ans){
    if(idx == n){
        ans.push_back(sum);
        return;
    }
    subsetSum(arr, n, idx + 1, sum + arr[idx], ans);
    subsetSum(arr, n, idx + 1, sum, ans);
}

int main()
{
    vector <int> arr = {2, 3};
    int n = arr.size();
    vector<int> ans;

    subsetSum(arr, n, 0, 0, ans);
    sort(ans.begin(), ans.end());

    for (int i : ans) {
        cout << i << ' ';
    }
    return 0;
}
