class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(a != 0 && nums[i] != val)
                nums[i-a] = nums[i];

            if(nums[i] == val)
                a++;
        }
        
        return (nums.size() - a);
    }
};