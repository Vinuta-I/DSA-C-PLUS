#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> result;
    int n = arr.size();

    int candidate1 = INT_MIN, count1 = 0;
    int candidate2 = INT_MIN, count2 = 0;

    // Step 1: Find the two potential candidates for majority elements
    for (int num : arr)
    {
        if (num == candidate1)
            count1++;
        else if (num == candidate2)
            count2++;
        else if (count1 == 0)
        {
            candidate1 = num;
            count1 = 1;
        }
        else if (count2 == 0)
        {
            candidate2 = num;
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    // Step 2: Check if the candidates are actual majority elements
    count1 = 0;
    count2 = 0;
    for (int num : arr)
    {
        if (num == candidate1)
            count1++;
        else if (num == candidate2)
            count2++;
    }

    if (count1 > n / 3)
        result.push_back(candidate1);

    if (count2 > n / 3)
        result.push_back(candidate2);

    return result;
}
int main()
{
    vector<int> arr = {3, 2, 3};
    vector<int> result = majorityElementII(arr);

    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
