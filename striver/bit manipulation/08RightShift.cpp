#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int rightShift1(int n, int x){
    int ans = n / pow(2, x);
    return ans;
}
string rightShift2(int n, int x){
    int ans = rightShift1(n, x);
    if(ans == 0) return "0";
    string s = "";
    while(ans > 0){
        s = s + (ans % 2 == 0 ? '0' : '1');
        ans = ans/2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(){
    int n = 13356;
    int x = 2;
    int ans1 = rightShift1(n,x);
    string ans2 = rightShift2(n,x);
    cout<<ans1<<" "<<ans2;
}