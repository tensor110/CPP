#include<iostream>
using namespace std;

void printNumbers(int i, int n){
    if(i>n) return;
    else{
        cout<<n<<" ";
        n--;
        printNumbers(i, n);
    }
}

int main(){
    int n = 5;
    int i = 1;
    printNumbers(i, n);
}
