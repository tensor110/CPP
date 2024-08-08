#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Array having Equal no. of positive and negative numbers
// Brute-force Solution 
// vector<int> rearrangeArray(vector<int> arr){
//     int n = arr.size();
//     vector<int> pos, neg;
//     for(int i = 0; i< n; i++){
//         if(arr[i]>= 0)  pos.push_back(arr[i]);
//         else  neg.push_back(arr[i]);
//     }
//     for(int i = 0; i<n/2; i++){
//         arr[2*i] = pos[i];
//         arr[2*i + 1] = neg[i];
//     }
//     return arr;
// }

// Optimal Solution 
// vector<int> rearrangeArray(vector<int> arr){
//     int n = arr.size();
//     vector<int> ans(n, 0);
//     int pos = 0;
//     int neg = 1;
//     for(int i = 0; i< n; i++){
//         if(arr[i] > 0){
//             ans[pos] = arr[i];
//             pos+=2;
//         }
//         else{
//             ans[neg] = arr[i];
//             neg+=2;
//         }
//     }
//     return ans;
// }

// Array having unequal no. of positive and negative numbers
vector<int> rearrangeArray(vector<int> arr){
    int n = arr.size();
    vector<int> pos, neg;
    for(int i = 0; i< n; i++){
        if(arr[i]>= 0)  pos.push_back(arr[i]);
        else  neg.push_back(arr[i]);
    }
    if(pos.size()>neg.size()){
        for(int i = 0; i<neg.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for(int i = neg.size(); i<n; i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i = 0; i<pos.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for(int i = pos.size(); i<n; i++){
            arr[index] = neg[i];
            index++;
        }
    }
    return arr;
}

int main(){
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    vector<int> ans = rearrangeArray(arr);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}