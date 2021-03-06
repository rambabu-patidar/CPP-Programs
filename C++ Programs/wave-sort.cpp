#include<iostream>
using namespace std;

void swap(int arr[], int i,int j){
    int temp = arr[i];
    arr[i]= arr[j];
    arr[j]= temp;
}

void waveSort(int arr[], int n){
    for( int i=1;i<=n-1;i+=2){
        if( arr[i-1]< arr[i]){
            swap(arr, i, i-1);
        }
        if( (arr[i+1]<arr[i]) && (i<=n-2)){
            swap(arr, i+1, i);
        }

    }

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for( int i=0;i<n;i++){
        cin>>arr[i];
    }
    waveSort(arr, n);
    for( int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}