#include <iostream>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> letters ={};
        int left=0;
        int maxLength = 0;

        for (int right=0; right<s.size(); right++){
            while (letters.count(s[right])) {
                letters.erase(s[left]);
                left++;
            }
            letters.insert(s[right]);
            maxLength = max(maxLength, right-left+1);
        }
        return maxLength;
    }
};