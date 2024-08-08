#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <unordered_set>
using namespace std;

// Brute-force Solution
// bool search(vector<int>arr, int num){
//     for(int i = 0; i<arr.size(); i++){
//         if(arr[i] == num){
//             return true;
//         }
//     }
//     return false;
// }
// int longestSequence(vector<int> arr){
//     int n = arr.size();
//     int largest = 1;
//     for(int i = 0; i<n; i++){
//         int count = 1;
//         int x = arr[i];
//         while(search(arr, x+1)== true){
//             x = x + 1;
//             count += 1;
//         }
//         largest = max(largest, count);
//     }
//     return largest;
// }

// Better Solution
// int longestSequence(vector<int> arr){
//     int n = arr.size();
//     if(n == 0) return 0;
//     sort(arr.begin(), arr.end());
//     int lastSmaller = INT_MIN;
//     int longest = 1;
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] - 1 == lastSmaller){
//             count+=1;
//             lastSmaller = arr[i];
//         }
//         else if(arr[i] != lastSmaller){
//             count = 1;
//             lastSmaller = arr[i];
//         }
//         longest = max(longest, count);
//     }
//     return longest;
// }

// Optimal Solution
int longestSequence(vector<int> arr){
    int n = arr.size();
    if(n == 0) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0; i<n; i++){
        st.insert(arr[i]);
    }
    for(auto it: st){
        if(st.find(it - 1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x + 1;
                count = count + 1;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main(){
    vector<int> arr = {102,4,100,1,101,3,2,1,1};
    int ans = longestSequence(arr);
    cout<<ans;
    cout << endl;
    return 0;
}