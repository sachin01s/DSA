class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c=='e' || c== 'i'|| c=='o'||c=='u';
    }
    string reverseVowels(string s) {
        int l = 0;
        int r = s.size();
        while(l<r){
            if(!isVowel(s[l])){
                l++;
            }else if(!isVowel(s[r])){
                r--;
            }else{
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};