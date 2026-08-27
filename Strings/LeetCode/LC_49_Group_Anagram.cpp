class Solution {
public:
    bool isAnagram(string &a , string &b){
        int freq[26]={0};

        if(a.size()!=b.size()) return false;

        for(char c : a){
            freq[c-'a']++;
        }for(char c:b){
            freq[c-'a']--;
        }
        for(int i = 0;i<26;i++){
            if(freq[i]!=0) return false;
        } 
        return true;   
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans;
        vector<bool> visited(n,false);

        for(int i = 0;i<n;i++){
            if(visited[i]) continue;

            vector<string> group;
            group.push_back(strs[i]);
            visited[i]=true;

            for(int j = i+1;j<n;j++){
                if(!visited[j] && isAnagram(strs[i],strs[j])){
                    group.push_back(strs[j]);
                    visited[j]=true;
                }
            }
            ans.push_back(group);
        }
        return ans;
    }
    
};