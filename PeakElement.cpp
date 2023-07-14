#include <bits/stdc++.h>
using namespace std;
int findPeak(int arr[], int n)
{
    int left = 0;
    int right = n-1;
    int mid;
    while (left <= right) {
    mid = (left + right) >> 1;
    if ((mid == 0 || arr[mid - 1] <= arr[mid])
            and (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            break;   
        if (mid > 0 and arr[mid - 1] > arr[mid])
            right = mid - 1;
          else
            left = mid + 1;
    }
     return mid;
} 
int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is " << findPeak(arr, N);
    return 0;
}
