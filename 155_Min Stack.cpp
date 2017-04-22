class MinStack {
private:
    vector<int> mins;
    vector<int> stack;
public:
    /** initialize your data structure here. */
    MinStack() {
        mins.push_back(INT_MAX);
    }
    
    void push(int x) {
        stack.push_back(x);
        mins.push_back(min(x, mins.back()));
    }
    
    void pop() {
        mins.pop_back();
        stack.pop_back();
    
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return mins.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */