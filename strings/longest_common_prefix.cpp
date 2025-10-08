class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        sort(strs.begin(), strs.end());
        
        string first = strs.front();
        string last = strs.back();
        int minStr = min(first.size(),last.size());
        int i = 0;

        while (i<minStr && first[i] == last[i]){
            i++;
        } 
        string substring = first.substr(0,i);  
        
        return substring;
    }
};
