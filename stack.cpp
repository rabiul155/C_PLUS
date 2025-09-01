#include<iostream>
#include<stack>
using namespace std;

// stack works in LIFO order

int main(){

stack<int> s;

s.push(1);
s.push(2);
s.push(3);

cout << "size of the stack" << s.size() << endl;

cout << s.top() << endl ; // return the value of top : 3

// how to loop in stack 

while (!s.empty()){
    cout << s.top() << " " ;
    s.pop();
}


stack<int > s2;

s2.swap(s);


cout << "size of the s " << s.size() << endl;
cout << "size of the s2 " << s.size() << endl;


}