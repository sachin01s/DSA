class Solution {
public:
    string minWindow(string s, string t) {
        int need[128] = {0};
        for(char c : t)
            need[c]++;
        int window[128] = {0};
        int l = 0;
        int r = 0;

        int minLen = INT_MAX;
        int start = 0;

        while(r < s.size()){
            window[s[r]]++;
            r++;

            while(true){

                bool valid = true;

                for(int i = 0; i < 128; i++){
                    if(window[i] < need[i]){
                        valid = false;
                        break;
                    }
                }
                if(!valid)
                    break;
                if(r - l < minLen){
                    minLen = r - l;
                    start = l;
                }
                window[s[l]]--;
                l++;
            }
        }
        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};