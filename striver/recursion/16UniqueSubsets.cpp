#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void uniqueSubsets(vector<int> arr, int idx, int n, vector<vector<int>> &ans, vector<int> &ds){
    ans.push_back(ds);
    for(int i = idx; i<n; i++){
        if(i != idx && arr[i] == arr[i-1]) continue;
        ds.push_back(arr[i]);
        uniqueSubsets(arr, i + 1, n, ans, ds);
        ds.pop_back();
    }
}

int main(){
    vector <int> arr = {1,2,2};
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> ds;

    uniqueSubsets(arr, 0, n, ans, ds);
    for (const auto &subseq : ans)
    {
        if (subseq.empty())
        {
            cout << "{}" << endl;
        }
        else
        {
            cout << "{ ";
            for (int val : subseq)
            {
                cout << val << " ";
            }
            cout << "}" << endl;
        }
    }
    
    return 0;
}