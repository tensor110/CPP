#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

string twosCompliment(string str){
    string s = "";
    for(int i = 0; i< str.length(); i++){
        if(str[i] == '0') s += "1";
        else if(str[i] == '1')    s += "0";
    }
    int carry = 1;
    for(int i = s.length() - 1; i>=0; i--){
        if(s[i] == '1' && carry == 1){
            s[i] = '0';
        }
        else if(s[i] == '0' && carry == 1){
            s[i] = '1';
            carry = 0;
        }
    }
    if(carry == 1)  s = '1' + s;
    return s;
}

int main(){
    string n = "110101";
    string ans = twosCompliment(n);
    cout<<ans;
}