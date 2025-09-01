#include<iostream>
#include<queue>
using namespace std;


// queue works in FIFO order

int main(){

queue<int> s;

s.push(1);
s.push(2);
s.push(3);

cout << "size of the queue" << s.size() << endl;

cout << s.front() << endl ; // return the value of front : 1

// how to loop in queue 

while (!s.empty()){
    cout << s.front() << " " ;
    s.pop(); // remove the front element
}


queue<int> s2;

s2.swap(s);


cout << "size of the s " << s.size() << endl;
cout << "size of the s2 " << s.size() << endl;


}