class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;

        int i = 0;

        while(i < chars.size()){
            char current = chars[i];
            int count = 0;

            while(i < chars.size() && chars[i] == current) {
                count++;
                i++;
            }

            ans.push_back(current);

            if(count > 1) {
                string num = to_string(count);

                for(char c : num) {
                    ans.push_back(c);
                }
            }
        }

        chars = ans;

        return chars.size();
    }
};