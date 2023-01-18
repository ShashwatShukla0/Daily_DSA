#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> stk;

    stk.push(25);
    stk.push(30);
    stk.push(20);
    stk.push(15);

    int num=35;
    stk.push(num);
    stk.pop();
    stk.pop();
    stk.pop();
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
}