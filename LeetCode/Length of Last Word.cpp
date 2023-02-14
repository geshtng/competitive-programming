class Solution {
public:
    int lengthOfLastWord(string s) {
        vector <string> word_list;
        
        istringstream ss(s);
        string word;
        
        while (ss >> word) word_list.push_back(word);
        
        return word_list[word_list.size()-1].length();
    }
};