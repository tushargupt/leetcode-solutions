class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            auto pos = std::find(nums.begin() + i + 1, nums.end(), complement); 
            if (pos != nums.end()) {
                res.push_back(i);
                res.push_back(pos - nums.begin());
                return res;
            }
        }
        return res;
    }
};