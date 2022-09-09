#include<iostream>
using namespace std;

void insertionSort( int arr[] , int n){
    for( int i=1;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        while(( temp < arr[j]) &&  j>=0 ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;

    }
   for( int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr, n);
    return 0;
}