class MyStack {
public:
    MyStack() = default;

    void push(int x) {
        q_.push_front(x);
    }

    int pop() {
        int ret = q_.front();
        q_.pop_front();
        return ret;
    }

    int top() {
        return q_.front();
    }

    bool empty() {
        return q_.empty();
    }

private:
    deque<int> q_;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */