class MyStack {
private:
queue<int> que;
queue<int> tmp;

public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        que.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(que.size()>1){
            int x=que.front();
            tmp.push(x);
            que.pop();
        }
        int x=que.back();
        que.pop();
        while(tmp.size()>0){
            int x=tmp.front();
            que.push(x);
            tmp.pop();
        }
        return x;
        
    }
    
    /** Get the top element. */
    int top() {
        return que.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */