#include<iostream>

using namespace std;

void swap(int *x, int *y) {
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selectionSort(int arr[], int n) {
    int min;

    for(int i=0;i<n-1;i++) {
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }

            if(min!=i){
                swap(&arr[min],&arr[i]);
            }
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    selectionSort(arr,n);
}