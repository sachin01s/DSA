class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left = 0;
        int ans = 0;
        unordered_map<int, int> freq;
        for(int right = 0;right<fruits.size();++right){
            //Expand Window
            freq[fruits[right]]++;

            //shrink window while window is invalid
            while(freq.size()>2){
                freq[fruits[left]]--;
                if(freq[fruits[left]]==0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            //update answer
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};