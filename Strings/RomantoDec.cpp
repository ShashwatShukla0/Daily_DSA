#include<iostream>
using namespace std;

int Rvalue(char r) {
    if(r=='I'){
        return 1;
    }
    if(r=='V'){
        return 5;
    }
    if(r=='X'){
        return 10;
    }
    if(r=='L'){
        return 50;
    }
    if(r=='C'){
        return 100;
    }
    if(r=='D'){
        return 500;
    }
    if(r=='M'){
        return 1000;
    }
    return -1;
}

int romanToDec(string str) {
    int res=0;
    int s1,s2;

    for(int i=0;i<str.length();i++){
         s1 = Rvalue(str[i]);

        if(i+1<str.length()){
            s2 = Rvalue(str[i+1]);

        if(s1>=s2) {
            res=res+s1;
        }
        else {
            res = res+s2-s1;
            i++;
        }
    }
    else {
        res=res+s1;
    }
 }
  return res;
}

int main()
{
    string str;
    cin>>str;
    cout<<"Integer Value is: "<<romanToDec(str);

    return 0;
}