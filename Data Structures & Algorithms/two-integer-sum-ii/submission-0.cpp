class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> group;
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            int k = target - numbers[i];
            if(group.find(k) != group.end()){
                return {group[k], i+1};
            }
            group[numbers[i]] = i+1;
        }
        return {};
    }
};
