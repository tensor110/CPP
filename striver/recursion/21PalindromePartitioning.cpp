#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPalindrome(string s, int start, int end){
    while(start < end){
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

void partition(string s, int idx, vector<vector<string>> &ans, vector<string> &path){
    if(idx == s.length()){
        ans.push_back(path);
        return;
    }
    for(int i = idx;i<s.length(); i++){
        if(isPalindrome(s, idx, i)){
            path.push_back(s.substr(idx, i-idx+1));
            partition(s, i + 1, ans, path);
            path.pop_back();
        }
    }
}

int main(){
    string s = "aabb";
    vector<vector<string>> ans;
    vector<string> path;
    partition(s, 0, ans, path);
    
    for (const auto& partition : ans) {
        cout << "{ ";
        for (const auto& str : partition) {
            cout << str << " ";
        }
        cout << "}" << endl;
    }
    return 0;
}