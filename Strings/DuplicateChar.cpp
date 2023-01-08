#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    
    int n=str.length();

    cout<<"Duplicate chars: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[i]==str[j]){
                cout<<str[i]<<endl;
                break;
            }
        }
    }
}