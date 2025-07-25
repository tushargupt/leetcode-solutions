class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res = INT_MAX;
        int start = 0;
        int sum = 0;
        for(int end = 0; end<nums.size(); end++){
            sum+=nums[end];
            while(sum>=target){
                res = min(res, end-start+1);
                sum-=nums[start++];
            }
        }
        return res==INT_MAX?0:res;
    }
};



