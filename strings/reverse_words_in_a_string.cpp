
#include <iostream>   
#include <sstream>   
#include <string>  

class Solution {
public:


    string reverseWords(string s){
        string word;
        stringstream ss(s);
        vector<string> words;

        while(ss>>word){
            words.push_back(word);
        }

        word = "";

        for(int i=words.size()-1; i>=0; i--){
            word += words[i];
            if(i!=0)
                word += " ";
        }
        return word;
    }
};
