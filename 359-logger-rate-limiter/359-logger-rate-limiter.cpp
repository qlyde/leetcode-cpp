class Logger {
public:
    Logger()
    : messages_{} {}
    
    bool shouldPrintMessage(int timestamp, string message) {
        if (messages_.find(message) != messages_.end() && timestamp - messages_[message] < 10) return false;
        messages_[message] = timestamp;
        return true;
    }

private:
    unordered_map<string, int> messages_;
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */



