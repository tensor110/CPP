#include<iostream>
using namespace std;
int power(int n, int p){
    int z=1;
    for(int i=1;i<=p;i++){
        z=z*2;
    }
    return z;
}
int btod(int n){
    for(int i=1;i<n;i++){
        return power(2,i);
    }
}
int main(){
    int n;
    int c=0;
    cin>>n;
    while(n!=0){
        c=c+(n%10)*btod(n);
        n=n/10;
    }
    cout<<c;
}