class MyQueue {
public:
    MyQueue() = default;

    void push(int x) {
        if (s1_.empty()) front_ = x;
        s1_.push(x);
    }

    int pop() {
        if (s2_.empty()) {
            while (!s1_.empty()) {
                s2_.push(s1_.top());
                s1_.pop();
            }
        }

        int ret = s2_.top();
        s2_.pop();
        return ret;
    }

    int peek() {
        if (!s2_.empty()) return s2_.top();
        return front_;
    }

    bool empty() {
        return s1_.empty() && s2_.empty();
    }

private:
    stack<int> s1_;
    stack<int> s2_;
    int front_;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */