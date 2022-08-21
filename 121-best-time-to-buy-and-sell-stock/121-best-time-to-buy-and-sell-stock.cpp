class Solution {
public:
    int maxProfit(vector<int>& prices) {
        auto b = numeric_limits<int>::max(), p = 0;
        for (auto const& price : prices) {
            b = min(b, price);
            p = max(p, price - b);
        }

        return p;
    }
};
