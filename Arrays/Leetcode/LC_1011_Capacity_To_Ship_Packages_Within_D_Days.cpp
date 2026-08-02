class Solution {
public:
    bool possible(const vector<int>& weights, int D, int capacity){
        int currentload = 0;
        int days = 1 ;
        for(int i = 0;i<weights.size();i++){
            if(currentload+weights[i]<=capacity){
                currentload+=weights[i];
            }else{
                days++;
                currentload=weights[i];
            }  
        }
        return days<=D;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int r = 0;
        for(int w : weights){
            r += w;
        }
        while(l<r){
            int mid = l+(r-l)/2;
            if(possible(weights,days,mid)){
                r=mid;
            }else{
                l=mid+1;
            }
        }
        return l;
    }  
};