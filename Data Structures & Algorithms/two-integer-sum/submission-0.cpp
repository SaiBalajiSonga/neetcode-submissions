class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> comp;
        for(int i = 0; i < nums.size(); i++){
            int compliment = target - nums[i];
            if(comp.find(compliment) != comp.end()){
                return {comp[compliment], i};
            }
            comp[nums[i]] = i;
        }
        return {};
    }
};
