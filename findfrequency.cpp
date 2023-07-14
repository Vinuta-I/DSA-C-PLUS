#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findFrequency(vector<int> v, int x) {
    unordered_map<int, int> freqMap;
    
    // Count the frequency of each element in the vector
    for (int num : v) {
        freqMap[num]++;
    }
    
    // Return the frequency of the given element
    return freqMap[x];
}

int main() {
    int testcase;
    cin >> testcase;
    
    while (testcase--) {
        int N;
        cin >> N;
        
        vector<int> v;
        
        // Taking vector element input
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            v.push_back(k);
        }
        
        int x;
        cin >> x;
        cout << findFrequency(v, x) << endl;
    }
    
    return 0;
}
