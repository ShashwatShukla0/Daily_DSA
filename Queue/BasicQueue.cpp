#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> g){
    queue<int> f= g;
    while(!f.empty()){
        cout<<" "<<f.front();
        f.pop();
    }

    cout<<endl;
}

int main() {

    queue<int> qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);

    cout << "The queue is : ";
    showq(qu);
  
    cout << "size() : " << qu.size()<<endl;
    cout << "front() : " << qu.front()<<endl;
    cout << "back() : " << qu.back()<<endl;
  
    cout << "pop() : ";
    qu.pop();
    showq(qu);
  
    return 0;
}