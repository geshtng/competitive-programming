class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums[0] == target) return 0;
        
        if (nums[nums.size()-1] == target) return nums.size()-1;
        
        if (nums[nums.size()-1] < target) return nums.size();
        
        int left = 0, right = nums.size()-1;
        int mid = left + (right - left) / 2;
        
        while (left <= right) {
            mid = left + (right - left) / 2;
            
            if (nums[mid] == target) return mid;
            
            if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        
        return left;
    }
};