//Pop Operation costly
#include <stack>
class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s1.empty() && s2.empty()){
            return -1;
        }
        while(!s1.empty()){
            int temp = s1.top();
            s1.pop();
            s2.push(temp);
        }
        int x = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return x;  
    }
    
    
    int peek() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int x = s2.top();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        return x;
    }
    
    bool empty() {
        return (s2.empty() && s1.empty());
    }
};
