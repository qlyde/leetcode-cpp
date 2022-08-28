class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        if (intervals.empty()) return true;
        sort(intervals.begin(), intervals.end());
        auto const sz = intervals.size();
        for (auto i = 0; i < sz - 1; ++i)
            if (intervals[i][1] > intervals[i + 1][0]) return false;
        return true;
    }
};

