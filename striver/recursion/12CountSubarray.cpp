#include <iostream>
#include <vector>
using namespace std;

int generateSubsequences(int arr[], int n, int idx, int sum, int val){

    if(sum > val) return 0;
    if (idx == n){
        if(sum == val) return 1;
        else return 0;
    }

    // Include the current element
    sum = sum + arr[idx];
    int l = generateSubsequences(arr, n, idx + 1, sum, val);

    // Exclude the current element
    sum = sum - arr[idx];
    int r = generateSubsequences(arr, n, idx + 1, sum, val);
    return (l+r);
}

int main()
{
    int arr[4] = {1, 2, 1, 1};
    int n = 4;
    int sum = 3;

    int ans = generateSubsequences(arr, n, 0, 0, sum);
    cout<<ans;
    return 0;
}
