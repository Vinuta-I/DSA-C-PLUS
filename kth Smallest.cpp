#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    int kthSmallest(int arr[], int l, int r, int k) {
        if (k > 0 && k <= r - l + 1) {
            int pivotIndex = partition(arr, l, r);
            if (pivotIndex - l == k - 1)
                return arr[pivotIndex];
            if (pivotIndex - l > k - 1)
                return kthSmallest(arr, l, pivotIndex - 1, k);
            return kthSmallest(arr, pivotIndex + 1, r, k - pivotIndex + l - 1);
        }
        return INT_MAX; // Return some appropriate value if k is out of range
    }
};

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    Solution obj;
    int kthSmallest = obj.kthSmallest(arr, 0, n - 1, k);
    cout << "Kth smallest element: " << kthSmallest << endl;
    return 0;
}
