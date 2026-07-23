class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int prev = nums[0];
        int count = 1, max_count = 1;
        for(int i = 1; i<nums.size(); i++){
            if(prev == nums[i])
                continue;
            if(nums[i] != prev + 1){
                max_count = max(max_count, count);
                count = 1;
                continue;
            }
            prev = nums[i];
            count++;
            max_count = max(max_count, count);
        }
        return max_count;
    }
};
