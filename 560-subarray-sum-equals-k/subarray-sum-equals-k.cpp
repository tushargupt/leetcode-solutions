class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int, int> prefixSums;
        int result = 0;
        int currentSum = 0;
        
        prefixSums[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            if (prefixSums.find(currentSum - k) != prefixSums.end()) {
                result += prefixSums[currentSum - k];
            }            
            prefixSums[currentSum]++;
        }
        
        return result;
    }

};
