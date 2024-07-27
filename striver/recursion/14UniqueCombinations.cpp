#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateUniqueCombinations(int arr[], int n, vector<int> &current, vector<vector<int>> &allSequences, int idx, int val)
{
    if (val == 0)
    {
        allSequences.push_back(current);
        return;
    }

    // Include the current element
    for(int i = idx; i<n; i++)
    {
        if(i > idx && arr[i] == arr[i-1]) continue;
        if(arr[i] > val) break;
        current.push_back(arr[i]);
        generateUniqueCombinations(arr, n, current, allSequences, i+1, val - arr[i]);
        current.pop_back();
    }
}

int main()
{
    int arr[5] = {1,1,1,2,2};
    int n = 5;
    vector<vector<int>> allSubsequences;
    vector<int> current;
    sort(arr, arr + n);

    generateUniqueCombinations(arr, n, current, allSubsequences, 0, 5);

    // Print all subsequences
    for (const auto &subseq : allSubsequences)
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
