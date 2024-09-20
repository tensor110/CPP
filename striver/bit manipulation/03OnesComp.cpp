#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

string onesCompliment(string str){
    string s = "";
    for(int i = 0; i< str.length(); i++){
        if(str[i] == '0') s += "1";
        else if(str[i] == '1')    s += "0";
    }
    return s;
}

int main(){
    string n = "110101";
    string ans = onesCompliment(n);
    cout<<ans;
}