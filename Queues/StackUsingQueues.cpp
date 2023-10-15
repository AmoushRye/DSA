//using push operation costly

#include <queue>
class MyStack {
private:
    queue<int> q1;
    queue<int> q2;
public:    
    void push(int x) {
       q2.push(x);
       while(!q1.empty()){
           q2.push(q1.front());
           q1.pop();
       } 
       queue<int> temp = q1;
       q1 = q2;
       q2 = temp;
    }
    
    int pop() {
        int temp = q1.front();
        q1.pop();
        return temp;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();   
    }
};

