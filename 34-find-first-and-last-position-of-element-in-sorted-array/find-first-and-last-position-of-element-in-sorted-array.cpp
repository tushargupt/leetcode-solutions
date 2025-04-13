class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int result = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] == target) {
                result = mid; 
                end = mid - 1;
            } 
            else if (nums[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        
        return result;
    }
    
    int findLast(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int result = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (nums[mid] == target) {
                result = mid;
                start = mid + 1;
            } 
            else if (nums[mid] < target) {
                start = mid + 1;
            } 
            else {
                end = mid - 1;
            }
        }
        
        return result;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1, -1};
        
        int first = findFirst(nums, target);
        int last = findLast(nums, target);
        
        return {first, last};
    }
};