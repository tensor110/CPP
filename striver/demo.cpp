#include <iostream>
using namespace std;
int max(int n, int m){
    if(n>m) return n;
    else return m;
}
int reverseBits(int n, int m)
{
    if(n%m == 0) return m;
    if(m%n == 0) return n;
    else{
        int t =1;
        for (int i = 1;i<max(m,n);i++){
            if(m%i == 0 && n%i == 0){
                t = i;
            }
        }
        return t;
    }
}
int main()
{
    int c = reverseBits(4,6);
    cout << c;
}