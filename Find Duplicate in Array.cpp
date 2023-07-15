#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n) {
    int tortoise = arr[0];
    int hare = arr[0];

    // Phase 1: Finding the intersection point of the two pointers
    do {
        tortoise = arr[tortoise];
        hare = arr[arr[hare]];
    } while (tortoise != hare);

    // Phase 2: Finding the start of the cycle (duplicate element)
    tortoise = arr[0];
    while (tortoise != hare) {
        tortoise = arr[tortoise];
        hare = arr[hare];
    }

    return hare;
}
