#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    str2=str1;
    int n=str1.length();
    for(int i=0;i<n/2;i++){
        swap(str1[i],str1[n-i-1]);
    }
    if(str1==str2){
        cout<<"Yes ";
    }
    else {
        cout<<"No";
    }
}