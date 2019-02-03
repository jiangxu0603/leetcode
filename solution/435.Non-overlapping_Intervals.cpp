/* Given a collection of intervals, find the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Note:
1. You may assume the interval's end point is always bigger than its start point.
2. Intervals like [1,2] and [2,3] have borders "touching" but they don't overlap each other. */

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        auto len = intervals.size();
        if(len <= 1)
            return 0;
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) { return a.end < b.end; });
        auto pre = intervals[0].end;
        auto count = 1;
        for(int i = 1; i < len; i++)
        {
            if(intervals[i].start >= pre){
                count++;
                pre= intervals[i].end;
            }
        }
        return len - count;    
    }
};