#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> result; // To store the missing and repeating elements

    // Create a hash table to count the occurrences of each element in the array
    unordered_map<int, int> countMap;

    // Traverse the array and update the count in the hash table
    for (int i = 0; i < n; i++)
    {
        countMap[arr[i]]++;
    }

    // Find the missing and repeating elements in the hash table
    for (int i = 1; i <= n; i++)
    {
        if (countMap[i] == 0)
        {
            result.first = i; // Missing element
        }
        else if (countMap[i] == 2)
        {
            result.second = i; // Repeating element
        }
    }

    return result;
}
