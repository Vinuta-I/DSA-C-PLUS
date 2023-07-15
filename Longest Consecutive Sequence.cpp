#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> numSet;
    int maxLength = 0;

    // Add all numbers to the set for O(1) lookup
    for (int num : arr) {
        numSet.insert(num);
    }

    for (int num : arr) {
        // If the current number is the start of a consecutive sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentLength = 1;

            // Find the length of the consecutive sequence starting from the current number
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentLength++;
            }

            // Update the maximum length
            maxLength = max(maxLength, currentLength);
        }
    }

    return maxLength;
}
int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    int n = arr.size();
    int result = lengthOfLongestConsecutiveSequence(arr, n);

    cout << "Length of the longest consecutive sequence: " << result << endl;

    return 0;
}
