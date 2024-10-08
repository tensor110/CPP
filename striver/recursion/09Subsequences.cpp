#include <iostream>
#include <vector>
using namespace std;

void generateSubsequences(int arr[], int n, int idx, vector<int> &current, vector<vector<int>> &allSubsequences){
    if (idx == n){
        allSubsequences.push_back(current);
        return;
    }

    // Include the current element
    current.push_back(arr[idx]);
    generateSubsequences(arr, n, idx + 1, current, allSubsequences);

    // Exclude the current element
    current.pop_back();
    generateSubsequences(arr, n, idx + 1, current, allSubsequences);
}

int main()
{
    int arr[3] = {3, 2, 1};
    int n = 3;
    vector<vector<int>> allSubsequences;
    vector<int> current;

    generateSubsequences(arr, n, 0, current, allSubsequences);

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
