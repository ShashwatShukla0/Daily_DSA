#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter size: ";
    cin>>a;
    cout<<endl;
    int count=1;
    for(int i=a;i>0;i--){
        for(int j=i;j>0;j--) {
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
    }
}