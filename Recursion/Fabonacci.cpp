#include<bits/stdc++.h>
using namespace std;

int fib(int i){
    if(i==0) {
        return 0;
    }
    if(i==1 || i==2){
        return 1;
    }
    else{
        return (fib(i-1)+fib(i-2));
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cout<<fib(i)<<" ";
    }
}