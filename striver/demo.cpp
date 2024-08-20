#include <iostream>
#include<limits.h>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        if(n==1) return nums;
        for(int i = 0;i<= n-k; i++){
            int flag= 0;
            for(int j = i; j< i+k-1; j++){
                if(nums[j]!=nums[j+1]-1){
                    flag = 0;
                    break;
                }
                else    flag = 1;
            }
            if(flag == 1)   ans.push_back(nums[i+k-1]);
            else    ans.push_back(-1);
        }
        return ans;
    }

int main()
{
    vector<int> arr = {1};
    int k = 1;
    vector<int> ans = resultsArray(arr, k);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
    
}