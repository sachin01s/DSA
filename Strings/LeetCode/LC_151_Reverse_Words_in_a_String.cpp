class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int start = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if(i - start > 0)
                    words.push_back(s.substr(start, i - start));

                start = i + 1;
            }
        }

        if(start < s.size())
            words.push_back(s.substr(start));

        string ans;

        for(int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if(i != 0)
                ans += " ";
        }

        return ans;
    }
};