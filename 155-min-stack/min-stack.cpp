class MinStack {
private:
    stack<int> s; // main stack
    stack<int> q; // stack to track min

public:
    MinStack() {
        // No need to initialize the stacks here; they are already members.
    }
    
    void push(int val) {
        s.push(val);
        if (q.empty()) {
            q.push(val);
        } else {
            q.push(min(val, q.top()));
        }
    }
    
    void pop() {
        if (!s.empty()) {
            s.pop();
            q.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return q.top();
    }
};