#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        arr.push_back(i);
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}