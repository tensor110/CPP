#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

string andOperation(string x, string y){
    while (x.length() < y.length()) x = '0' + x;
    while (y.length() < x.length()) y = '0' + y;

    string s = "";
    int n = x.length();
    for(int i = 0; i<n; i++){
        if(x[i] == '1' && y[i] == '1')  s+='1';
        else    s+='0';
    }
    return s;
}

int main(){
    string x = "110101";
    string y = "101011";
    string ans = andOperation(x, y);
    cout<<ans;
}