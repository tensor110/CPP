#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// Find all permutation using recursion.
// Find out the given permutation.
// Return next permutation

// solution using STL
// vector<int> nextPermutation(vector<int> arr){
//     next_permutation(arr.begin(), arr.end());
//     return arr;
// }

// Optimal Solution 
vector<int> nextPermutation(vector<int> arr){
    int index = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    for(int i = n-1; i>index;i--){
        if(arr[i]>arr[index]){
            swap(arr[index], arr[i]);
            break;
        }
    }
    reverse(arr.begin()+index+1, arr.end());
    return arr;
}

int main(){
    vector<int> arr = {2,1,5,4,3,0,0};
    vector<int> ans = nextPermutation(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}