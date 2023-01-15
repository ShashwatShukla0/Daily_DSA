#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int temp[n+1];

    for(int i=0;i<n;i++){
        temp[i]=0;
    }

    for(int i=0;i<n;i++){
        temp[arr[i]-1]=1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        while (temp[i]==0)
        {
            ans=i+1;
        }
    }
    cout<<ans<<endl;
}