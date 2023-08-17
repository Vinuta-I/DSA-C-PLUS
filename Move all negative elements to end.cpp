#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void segregateElements(int arr[], int n) {
        vector<int> positiveElements;
        vector<int> negativeElements;

        // Separate positive and negative elements into separate vectors
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                positiveElements.push_back(arr[i]);
            } else {
                negativeElements.push_back(arr[i]);
            }
        }

        // Copy positive elements followed by negative elements back to the original array
        int i = 0;
        for (int num : positiveElements) {
            arr[i++] = num;
        }
        for (int num : negativeElements) {
            arr[i++] = num;
        }
    }
};

int main() {
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution solution;
    solution.segregateElements(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
