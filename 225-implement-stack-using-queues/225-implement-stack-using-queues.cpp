class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q;
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int x = q.back();
        for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
        q.pop();
        return x;
    }
    
    int top() {
        return q.back();
    }
    
    bool empty() {
        return q.size() == 0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */