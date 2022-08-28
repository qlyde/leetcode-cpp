class MyStack {
public:
    MyStack() = default;

    void push(int x) {
        q1_.push(x);
        top_ = x;
    }

    int pop() {
        while (q1_.size() > 1) {
            top_ = q1_.front();
            q2_.push(top_);
            q1_.pop();
        }

        int ret = q1_.front();
        q1_.pop();
        swap(q1_, q2_);
        return ret;
    }

    int top() {
        return top_;
    }

    bool empty() {
        return q1_.empty();
    }

private:
    queue<int> q1_;
    queue<int> q2_;
    int top_;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */


