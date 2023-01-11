#include<iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[m];
    }
    int a=0,b=0;
    while(a<n && b<m){
        if(arr1[a]<arr2[b]){
            cout<<arr1[a++]<<" ";
        }
        else
        if(arr1[a]>arr2[b]){
            cout<<arr2[b++]<<" ";
        } else{
            cout<<arr2[b++]<<" ";
            a++;
        }
    }

    while(a<n){
        cout<<arr1[a++]<<" ";
    }
    while(b<m){
        cout<<arr2[b++]<<" ";
    }

}