class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            int n = nums.size();
        if (n < 3) return {};
        
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> result;
        
        if (nums[0] > 0) return {};
        
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
        
            if (nums[i] > 0) break;
            
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum < 0) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    int currentLeft = nums[left];
                    int currentRight = nums[right];
                    while (left < right && nums[left] == currentLeft) left++;
                    while (left < right && nums[right] == currentRight) right--;
                }
            }
        }
        
        return result;
    }
};