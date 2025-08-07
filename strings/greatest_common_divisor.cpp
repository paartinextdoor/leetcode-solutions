class Solution {
public:

    string gcdOfStrings(string str1, string str2) {
        string result;
        int minLength = min(str1.length(), str2.length());
        for (int i=0; i<minLength; i++) {
            if (str1[i]==str2[i]){
                if (str1[i]==result[0])
                    break;
                result+= str1[i];
            }else{
                return result;
            }    
        }
    return result;
    }
};
