class Solution {
public:

    bool isVowel (char c){
        return c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c =='A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int left = 0, right = s.length();
        while (left < right){
            while (left < right && !isVowel(s[left])){
                left++;
            }
            while (left < right && !isVowel(s[right])){
                right--;
            }
            if (left < right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }

};
