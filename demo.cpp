// #include <iostream>
// using namespace std;
// int main(){
//     int i, j;
//     for (i = 1; i < 6; i++){
//         for (j = 1; j < 5; j++){
//             if (i == 1 || i == 5 || j == 1 || j == 4)
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i, j;
//     for (i = 1; i < 6; i++){
//         for (j = 1; j < 6-i+1; j++){
//                 cout << "*";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i, j;
//     for (i = 1; i < 6; i++){
//         for (j = 1; j < 6; j++){
//                 if(i+j>5)
//                     cout << "*";
//                 else
//                     cout<<" ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i, j;
//     int x=1;
//     for (i = 1; i < 6; i++){
//         for (j = 1; j <=i; j++){
//             if(i>=j)
//                 cout<<x;
//                 cout<<" ";
//             x++;
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int i, j;
//     int x=1;
//     for (i = 1; i < 5; i++){
//         for (j = 1; j <=8; j++){
//             if(i>=j || i>=9-j)
//                 cout<<"*";
//             else 
//                 cout<<" ";
//         }
//         cout << "\n";
//     }
//     for (i = 5; i < 9; i++){
//         for (j = 1; j <=8; j++){
//             if(i<=j || i<=9-j)
//                 cout<<"*";
//             else 
//                 cout<<" ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     int c=0;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         if(n%i==0)
//             c++;
//     }
//     if(c==2){
//         cout<<"Prime";
//     }
//     else
//         cout<<"Non prime";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     int c=0;
//     cin>>n;
//     while(n!=0){
//         c=c*10+n%10;
//         n=n/10;
//     }
//     cout<<c;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     int c=0;
//     cin>>n;
//     int b=n;
//     while(n!=0){
//         c=c+(n%10)*(n%10)*(n%10);
//         n=n/10;
//     }
//     if(b==c){
//         cout<<"Armstrong number";
//     }
//     else
//         cout<<"Not";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     for(j=2;j<=n;j++){
//         int c=0;
//         for(i=1;i<=j;i++){
//             if(j%i==0){
//                 c++;
//             }
//         }
//         if(c==2)
//                 cout<<j<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int fibbo(int n){
//     for(int i=0;i<n;i++){
//         if(n==1)
//             return 0;
//         else if(n==2)
//             return 1;
//         else
//             return fibbo(n-1)+fibbo(n-2);
//     }
// }
// int main(){
//     int n,i;
//     cout<<"Enter n: ";
//     cin>>n;
//     for(i=1;i<n;i++){
//         cout<<fibbo(i)<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int rev(int n){
//     int x=0;
//     while(n!=0){
//         x=x*10+n%10;
//         n=n/10;
//     }
//     return x;
// }
// int main(){
//     int n;
//     int c=0;
//     cin>>n;
//     while(n!=0){
//         c=c*10+n%2;
//         n=n/2;
//     }
//     cout<<rev(c);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"Enter three numbers";
//     cin>>x>>y>>z;
//     if(x*x+y*y==z*z || y*y+z*z==x*x || x*x+z*z==y*y)
//         cout<<"Pythogorian triplet";
//     else    
//         cout<<"Not";
// }

// #include<iostream>
// using namespace std;
// int rev(int n){
//     int x=0;
//     while(n!=0){
//         x=x*10+n%10;
//         n=n/10;
//     }
//     return x;
// }
// int main(){
//     int n;
//     int c=0;
//     cin>>n;
//     while(n!=0){
//         c=c*10+n%2;
//         n=n/2;
//     }
//     cout<<c;
// }

