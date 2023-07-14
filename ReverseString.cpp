#include <iostream>
#include <algorithm>
using namespace std;

string reverseWord(string str){
    // Reverse the string using the reverse function
    reverse(str.begin(), str.end());
    
    // Return the reversed string
    return str;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << reverseWord(s) << endl;
    }
    return 0;
}
