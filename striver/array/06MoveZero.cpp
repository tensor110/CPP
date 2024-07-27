#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute-force Solution 
// vector<int> moveZero(vector<int> arr, int n){
//     vector<int> temp;
//     for(int i = 0; i<n; i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     int nz = temp.size();
//     for(int i = 0; i<nz; i++){
//         arr[i] = temp[i];
//     }
//     for(int i = nz; i<n; i++){
//         arr[i] = 0;
//     }
//     return arr;
// }

// Optimal Solution
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
} 
vector<int> moveZero(vector<int> arr, int n){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    for(int i = j+1; i< n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {0,1,0,0,4,5};
    int n = arr.size();
    vector<int> ans = moveZero(arr, n);
    for(int i = 0; i< n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}