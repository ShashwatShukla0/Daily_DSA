#include<iostream>
using namespace std;

void merge(int arr[],int start, int mid,int end){
    int idxStart = mid-start+1;
    int idxEnd = end-mid;

    int *arr1 = new int[idxStart];
    int *arr2 = new int[idxEnd];

    for(int i=0;i<idxStart;i++){
        arr1[i] = arr[i+start];
    }
    for(int j=0;j<idxEnd;j++){
        arr2[j]= arr[mid+1+j];
    }

    int idxarr1=0;
    int idxarr2=0;
    int idxmerged=start;

    while(idxarr1<idxStart && idxarr2<idxEnd){
        if(arr1[idxarr1]<=arr2[idxarr2]){
            arr[idxmerged]=arr1[idxarr1];
            idxarr1++;
        }
        else {
            arr[idxmerged]=arr2[idxarr2];
            idxarr2++;
        }
        idxmerged++;
    }

    while(idxarr1<idxStart){
        arr[idxmerged]=arr1[idxarr1];
        idxarr1++;
        idxmerged++;
    }

    while(idxarr2<idxEnd){
        arr[idxmerged] = arr1[idxarr2];
        idxarr2++;
        idxmerged++;
    }

    delete[] arr1;
    delete[] arr2;




}


void mergeSort(int arr[], int start,int end){
    if(start>end){
        return;
    }
    int mid = (start+(end-start))/2;

    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArr(arr,n);
    mergeSort(arr,0,n);
    printArr(arr,n);
}