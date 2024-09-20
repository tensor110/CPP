#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

string orOperation(string x, string y){
    while (x.length() < y.length()) x = '0' + x;
    while (y.length() < x.length()) y = '0' + y;

    string s = "";
    int n = x.length();
    for(int i = 0; i<n; i++){
        if(x[i] == '0' && y[i] == '0')  s+='0';
        else    s+='1';
    }
    return s;
}

int main(){
    string x = "110101";
    string y = "101001";
    string ans = orOperation(x, y);
    cout<<ans;
}