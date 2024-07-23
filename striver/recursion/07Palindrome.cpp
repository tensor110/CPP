#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string &s, int i, int n){
    if(i>=n/2) return true;
    if(s[i] != s[n-i-1]){
        return false;
    };
    checkPalindrome(s, i+1, n);
}

int main(){
    string s = "lucul";
    bool ans = checkPalindrome(s, 0, s.length());
    cout<<ans<<endl;
}
