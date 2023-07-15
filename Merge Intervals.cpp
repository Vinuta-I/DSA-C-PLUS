#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    if (intervals.empty()) {
        return {}; // If the input vector is empty, return an empty vector.
    }

    // Sort the intervals based on their start points in ascending order.
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    vector<vector<int>> mergedIntervals;
    mergedIntervals.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= mergedIntervals.back()[1]) {
            // If the current interval's start point is less than or equal to
            // the finish point of the last merged interval, merge them.
            mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
        } else {
            // Otherwise, add the current interval to the merged intervals vector.
            mergedIntervals.push_back(intervals[i]);
        }
    }

    return mergedIntervals;
}
