class MovingAverage {
public:
    MovingAverage(int size) 
    : size_{size}
    , window_{}
    , n_{0}
    , sum_{0} {}

    double next(int val) {
        ++n_;
        window_.push_back(val);
        if (n_ > size_) {
            sum_ -= window_.front();
            window_.pop_front();
        }
        sum_ += val;
        return (double) sum_ / min(n_, size_);
    }

private:
    int size_;
    deque<int> window_;
    int n_;
    int sum_;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */

