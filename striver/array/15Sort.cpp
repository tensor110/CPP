#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// vector<int> sortArray(vector<int> arr){
//     sort(arr.begin(), arr.end());
//     return arr;
// }

// Better Solution 
// vector<int> sortArray(vector<int> arr){
//     int n = arr.size();
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == 0) count0++;
//         else if(arr[i] == 1) count1++;
//         else count2++;
//     }
//     for(int i = 0; i<count0; i++) arr[i]= 0;
//     for(int i = count0; i < count0 + count1; i++) arr[i]= 1;
//     for(int i = count0 + count1; i<n; i++) arr[i]= 2;
//     return arr;
// }

// Optimal Solution 
vector<int> sortArray(vector<int> arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1)
            mid++;
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    vector<int> ans = sortArray(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}