#include <iostream>
#include <vector>
using namespace std;

bool generateSubsequences(int arr[], int n, int idx, vector<int> &current, vector<vector<int>> &allSubsequences,int sum, int val){
    if (idx == n){
        if(sum == val){
            allSubsequences.push_back(current);
            return true;
        }
        return false;
    }

    // Include the current element
    current.push_back(arr[idx]);
    sum = sum + arr[idx];
    if(generateSubsequences(arr, n, idx + 1, current, allSubsequences, sum, val) == true)
        return true;

    // Exclude the current element
    current.pop_back();
    sum = sum - arr[idx];
    if(generateSubsequences(arr, n, idx + 1, current, allSubsequences, sum, val) == true)
        return true;
    return false;
}

int main()
{
    int arr[3] = {1, 2, 1};
    int n = 3;
    int sum = 3;
    vector<vector<int>> allSubsequences;
    vector<int> current;

    generateSubsequences(arr, n, 0, current, allSubsequences, 0, sum);

    // Print all subsequences
    for (const auto &subseq : allSubsequences){
        if (subseq.empty()){
            cout << "{}" << endl;
        }
        else{
            cout << "{ ";
            for (int val : subseq){
                cout << val << " ";
            }
            cout << "}" << endl;
        }
    }
    return 0;
}
