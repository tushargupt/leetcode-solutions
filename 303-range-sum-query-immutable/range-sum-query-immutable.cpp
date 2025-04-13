class NumArray {
private:
    vector<int> prefixSum;
    
public:
    NumArray(vector<int>& nums) {
        prefixSum.resize(nums.size());
        
        if (!nums.empty()) {
            prefixSum[0] = nums[0];
            for (int i = 1; i < nums.size(); i++) {
                prefixSum[i] = prefixSum[i-1] + nums[i];
            }
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) {
            return prefixSum[right];
        } else {
            return prefixSum[right] - prefixSum[left-1];
        }
    }
};