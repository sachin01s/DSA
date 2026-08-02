class Solution {
public:
    bool possible(vector<int>& bloomDay, int day,int k,int m){
        int consecutive = 0;
        int bouquets = 0;
        for(int i = 0; i<bloomDay.size();i++){
            if(day>=bloomDay[i]) consecutive++;
            else consecutive=0;
            if(consecutive==k){
                consecutive=0;
                bouquets++;
            }
        }
        return bouquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()) return -1;
        int l = 1;
        int r = *max_element(bloomDay.begin(),bloomDay.end());
        while(l<r){
            int mid = l+(r-l)/2;
            if(possible(bloomDay,mid,k,m)) r=mid;
            else l=mid+1;
        }
        return l;
    }
};