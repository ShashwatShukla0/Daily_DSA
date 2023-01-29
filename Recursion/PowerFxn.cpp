#include<bits/stdc++.h>
using namespace std;
int calculate(int b, int p) {
    if(p!=0){
        return (b*calculate(b,p-1));
    }
    else
    {
        return 1;
    }
}

int main() {
    int p,b;
    cout<<"Enter Base: "<<endl;
    cin>>b;

    cout<<"Enter Power: "<<endl;
    cin>>p;

    cout<<calculate(b,p);
}