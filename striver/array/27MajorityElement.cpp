#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<map>
using namespace std;

// Brute-force Solution 
// vector<int> majorityElement(vector<int> arr){
//     vector<int> ls;
//     int n = arr.size();
//     for(int i = 0; i<n; i++){
//         if(find(ls.begin(), ls.end(), arr[i]) == ls.end()){
//             int count = 0;
//             for(int j= 0; j<n; j++){
//                 if(arr[i] == arr[j])
//                     count++;
//             }
//             if(count > n/3)
//                 ls.push_back(arr[i]);
//         }
//     }
//     return ls;
// }

// Better Solution 
// vector<int> majorityElement(vector<int> arr) {
//     int n = arr.size();
//     vector<int> ls;
//     map<int, int> mpp;
//     int mini = int(n / 3) + 1;
//     for (int i = 0; i < n; i++) {
//         mpp[arr[i]]++;
//         if (mpp[arr[i]] == mini)
//             ls.push_back(arr[i]);
//         if (ls.size() == 2) break;
//     }
//     return ls;
// }

// Optimal Solution 
vector<int> majorityElement(vector<int> arr) {
    int n = arr.size();
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN;
    int el2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 != arr[i]) {
            cnt1 = 1;
            el1 = arr[i];
        }
        else if (cnt2 == 0 && el1 != arr[i]) {
            cnt2 = 1;
            el2 = arr[i];
        }
        else if (arr[i] == el1) cnt1++;
        else if (arr[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }
    vector<int> ls;
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == el1) cnt1++;
        if (arr[i] == el2) cnt2++;
    }
    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);
    return ls;
}

int main(){
    vector<int> arr = {1,1,1,2,2,3,3,3};
    vector<int> ans = majorityElement(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}