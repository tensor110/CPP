#include<iostream>
using namespace std;
int fact(int n){
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int ncr(int n, int r){
    return fact(n)/((fact(n-r))*fact(r));
}
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<ncr(i,j);
        }
        cout<<"\n";
    }
}