#include <unordered_set>

class Solution {
public:
    int doUnion(int a[], int n, int b[], int m) {
        // Create a set to store unique elements
        std::unordered_set<int> unionSet;
        
        // Insert elements from the first array
        for (int i = 0; i < n; i++) {
            unionSet.insert(a[i]);
        }
        
        // Insert elements from the second array
        for (int i = 0; i < m; i++) {
            unionSet.insert(b[i]);
        }
        
        // Return the count of unique elements
        return unionSet.size();
    }
};






