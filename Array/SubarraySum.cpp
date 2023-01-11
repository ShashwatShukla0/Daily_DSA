#include<iostream>
using namespace std;

int main() {
    int n,sum;
    cin>>n;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int currSum= arr[i];

        if(currSum==sum) {
            cout<<"Sum found at index: "<<i<<endl;
        }
        else {
            for(int j=i+1;j<n;j++){
                currSum+= arr[j];

                if(currSum==sum){
                    cout<<"Sum found at index: "<<i<<" & "<<j;
                }
            }
        }
    }
}