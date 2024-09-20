#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string DecimalToBinary(int n){
    if(n == 0) return "0";
    string s = "";
    while(n > 0){
        s = s + (n % 2 == 0 ? '0' : '1');
        n = n/2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n = 13;
    string ans = DecimalToBinary(n);
    cout<<ans;
}