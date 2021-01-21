#include <iostream>
#include <vector>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s) {
    string left = "";
    int longest = 0, it = 0;
    bool matched = false;

    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < left.length(); j++) {
            if (left[j] == s[i]) {
                i = it;
                left = "";
                it++;
                break;
            }
        }
        left += s[i];
        if (left.length() > longest)
            longest = left.length();
    }
    return longest; 
}


int main() {

    cout << lengthOfLongestSubstring("abcabcbb") << endl;
    cout << lengthOfLongestSubstring("bbbbb") << endl;
    cout << lengthOfLongestSubstring("pwwkew") << endl;
    cout << lengthOfLongestSubstring("") << endl;
    cout << lengthOfLongestSubstring(" ") << endl;
    cout << lengthOfLongestSubstring("au") << endl;
    cout << lengthOfLongestSubstring("dvdf") << endl;

    return 0;
}