class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<int> result;
        for(int x : nums){
            count[x]++;
            if(count[x] == k) result.push_back(x);
        }
        return result;
    }
};
