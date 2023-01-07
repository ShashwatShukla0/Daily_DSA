#include<iostream>
using namespace std;

void merge(int arr,int start, int mid,int end){
    int idxStart = mid-start+1;
    int idxEnd = end-mid;

    int *arr1 = new int[idxStart];
    int *arr2 = new int[idxEnd];

    for(auto i=0;i<idxStart;i++){
        arr1[i] = arr[i+start];
    }


}


void mergeSort(int arr[], int start,int end){
    if(start>end){
        return;
    }
    int mid = (start+end)/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n);
}