#include<iostream>
using namespace std;
void nStarDiamond(int n) {
    int i,j;
    for(i=0;i<n;i++){
        for(j=n-1;j>=0;j--){
            cout<<" ";
        }
        for(j=1;j<=2*n-1;j++){
            cout<<"*";
        }
        for(j=n-1;j>=0;j--){
            cout<<" ";
        }
        for(j=0;j<n;j++){
            cout<<" ";
        }
        for(j=2*n-1;j>=1;j--){
            cout<<"*";
        }
        for(j=1;j<n;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    nStarDiamond(3);
}