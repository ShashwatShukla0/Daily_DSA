#include<iostream>
using namespace std;

void rotateArr(int arr[],int n,int a){
    while(a<n){
        swap(arr[a],arr[n-1]);
        a++;
        n--;
    }
}

int main(){
    int n,a;
    cin>>n;
    cout<<"Enter no. to rotate by: "<<endl;
    cin>>a;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    rotateArr(arr,n,a);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}