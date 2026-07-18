class Solution {
public:
    bool isVowel(char c){
        return c=='a' || c=='e' ||  c=='i' || c=='o' || c=='u' ;
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int currVowel = 0;
        int maxVowel = currVowel;
        for(int i = 0; i<k ; ++i){
            if(isVowel(s[i])){
                currVowel++;
            }
        }
        maxVowel=currVowel;
        int left = 0;
        int right = k;
        while(right<n){
            if(isVowel(s[left])){
                currVowel--;
            }if(isVowel(s[right])){
                currVowel++;
            }
            left++;
            right++;
            maxVowel = max(currVowel,maxVowel);
        }
        return maxVowel;
    }
};