class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stackInuse.push(minOne);
        if(val < minOne) {
            minOne = val;
        }
        stackInuse.push(val);
    }
    
    void pop() {
        stackInuse.pop();
        minOne = stackInuse.top();
        stackInuse.pop();
    }
    
    int top() {
        return stackInuse.top();
    }
    
    int getMin() {
        return minOne;
    }
private:
    stack<int> stackInuse;
    int minOne = INT_MAX;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */