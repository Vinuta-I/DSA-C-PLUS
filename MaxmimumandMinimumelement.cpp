#include <iostream>
#include <utility>

std::pair<long long, long long> getMinMax(long long a[], int n) {
    if (n == 0) {
        // Return an invalid range if the array is empty
        return std::make_pair(-1, -1);
    }

    long long minVal = a[0];
    long long maxVal = a[0];

    for (int i = 1; i < n; ++i) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
        if (a[i] > maxVal) {
            maxVal = a[i];
        }
    }

    return std::make_pair(minVal, maxVal);
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    long long* arr = new long long[n];
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::pair<long long, long long> result = getMinMax(arr, n);
    std::cout << "Minimum value: " << result.first << std::endl;
    std::cout << "Maximum value: " << result.second << std::endl;

    delete[] arr;
    return 0;
}
