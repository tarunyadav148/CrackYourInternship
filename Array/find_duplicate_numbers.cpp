class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size()-1,cnt,mid,mcnt=0,dup;
        
        while(low<=high){
            cnt = 0;
            mcnt = 0;
            mid = (high+low)/2;
                
            for(int n:nums){
                if(n<mid){
                    cnt++;
                }
                if(n==mid) mcnt++;
            }
            
            if(mcnt>1){
                dup = mid;
                break;
            }
            else if(cnt<mid) low = mid+1;
            else high = mid-1;
        }

        return dup;
    }
};
