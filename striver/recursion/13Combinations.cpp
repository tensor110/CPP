#include <iostream>
#include <vector>
using namespace std;

void generateCombinations(int arr[], int n, vector<int> &current, vector<vector<int>> &allSequences, int idx, int val)
{
        if (idx == n)
        {
            if (val == 0)
            {
                allSequences.push_back(current);
            }
            return;
        }

    // Include the current element
    if ( arr[idx] <= val)
    {
        current.push_back(arr[idx]);
        generateCombinations(arr, n, current, allSequences, idx, val-arr[idx]);
        current.pop_back();
    }
    generateCombinations(arr, n, current, allSequences, idx+1, val);
}

int main()
{
    int arr[3] = {3, 2, 1};
    int n = 3;
    vector<vector<int>> allSubsequences;
    vector<int> current;

    generateCombinations(arr, n, current, allSubsequences, 0, 3);

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
