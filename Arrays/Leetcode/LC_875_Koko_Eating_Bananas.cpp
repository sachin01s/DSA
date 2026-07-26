class Solution {
public:
    bool possible(const vector<int>& piles , int k , int h){
        int hours = 0;
        for(int i = 0;i<piles.size();i++){
            hours+=piles[i]/k;
            if( piles[i] % k != 0 ){
                hours++;
            }
        }
        if(hours<=h){
            return true;
        }else{
            return false;
        }
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        while(l<r){
            int mid = l+(r-l)/2;
            if(possible(piles,mid,h)){
                r = mid;
            }else{
                l=mid+1;
            }
        }
        return r;
    }
};