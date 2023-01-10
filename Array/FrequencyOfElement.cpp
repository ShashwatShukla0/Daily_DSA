#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k,count=0;
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            count++;
        }
    }
    cout<<count<<endl;
}