#include<iostream>
#include<queue>
using namespace std;


// queue works in FIFO order

int main(){

priority_queue<int> s; // order 10, 5, 3;
// priority_queue<int, vector<int>, greater<int>> s; // order 3, 5, 10

s.push(5);
s.push(10);
s.push(3);

cout << "size of the queue" << s.size() << endl;

cout << s.top() << endl ; // return the value of top : 10

// how to loop in queue 

while (!s.empty()){
    cout << s.top() << " " ;
    s.pop(); // remove the top element
}


}