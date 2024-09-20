#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int BinaryToDecimal(string n){
    int ans = 0;
    if(n == "0") return ans;
    int p = 0;
    for(int i = n.length()-1; i>=0; i--){
        ans += (n[i] - '0')*pow(2,p);
        p++;
    }
    return ans;
}

int main(){
    string n = "1101";
    int ans = BinaryToDecimal(n);
    cout<<ans;
}