// Linear Search ->
// #include<iostream>
// using namespace std;
// int linearsearch(int arr[], int n, int element){
//     int i;
//     for(i=0;i<n;i++){
//         if(arr[i]==element){
//             return i+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[10]={4,10,22,55,44,62,3,11,33,26};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int e,pos;
//     cout<<"Enter the element to search: ";
//     cin>>e;
//     pos= linearsearch(arr, n, e)+1;
//     if(pos==-1)
//         cout<<"Element is not in the array";
//     else
//         cout<<"Position is "<<pos;
//     return 0;
// }

// Binary Search-> 
// Iterative Method->
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int l, int h, int element){
//     while(l<=h){
//         int mid= (l+h)/2;
//         if(arr[mid]==element)
//             return mid;
//         else if(arr[mid]>element)
//             h= mid-1;
//         else if(arr[mid]<element)
//             l= mid+1;
//     }
//             return -1;
// }
// int main(){
//     int arr[10]={4,10,22,55,44,62,3,11,33,26};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int e,pos;
//     cout<<"Enter the element to search: ";
//     cin>>e;
//     pos= binarysearch(arr, 0, n, e)+1;
//     if(pos==-1)
//         cout<<"Element is not in the array";
//     else
//         cout<<"Position is "<<pos;
//     return 0;
// }

// Recursive Method->
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int l, int h, int element){
//     while(l<=h){
//         int mid= (l+h)/2;
//         if(arr[mid]==element)
//             return mid;
//         else if(arr[mid]>element)
//             return binarysearch(arr,l,mid-1,element);
//         else if(arr[mid]<element)
//             return binarysearch(arr,mid+1,h,element);
//     }
//             return -1;
// }
// int main(){
//     int arr[10]={4,10,22,55,44,62,3,11,33,26};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     int e,pos;
//     cout<<"Enter the element to search: ";
//     cin>>e;
//     pos= binarysearch(arr, 0, n, e)+1;
//     if(pos==-1)
//         cout<<"Element is not in the array";
//     else
//         cout<<"Position is "<<pos;
//     return 0;
// }

// Sorting 
// Selection Sort 

// #include<iostream>
// using namespace std;
// void selection(int a[], int n){
//     int i,j;
//     for(i=1;i<n;i++){
//         int min= i;
//         for(j=i+1;j<n;j++){
//             if(a[j]<a[min]){
//                 min= j;
//             }
//         }
//                 int temp = a[i];
//                 a[i]= a[min];
//                 a[min]= temp;

//     }
// }
// int main(){
//     int arr[10]={4,10,22,55,44,62,3,11,33,26};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     selection(arr,n);
//     printf("After sorting ");
//     for(int i= 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Bubble Sort 

// #include<iostream>
// using namespace std;
// void bubble(int a[], int n){
//     int i,j;
//     for(i=1;i<n;i++){
//         for(j=i+1;j<n;j++){
//             if(a[j]<a[i]){
//                 int temp = a[j];
//                 a[j]= a[i];
//                 a[i]= temp;
//             }
//         }
//     }
// }
// int main(){
//     int arr[10]={4,10,22,55,44,62,3,11,33,26};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     bubble(arr,n);
//     printf("After sorting ");
//     for(int i= 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Insertion Sort 

#include<iostream>
using namespace std;
void insertion(int a[], int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                int temp = a[j];
                a[j]= a[i];
                a[i]= temp;
            }
        }
    }
}
int main(){
    int arr[10]={4,10,22,55,44,62,3,11,33,26};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
    printf("After sorting ");
    for(int i= 0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

