class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1: Count frequencies
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        // Step 2: Create buckets. 
        // Size is nums.size() + 1 so we can use frequency as the exact index.
        vector<vector<int>> buckets(nums.size() + 1);
        
        for (auto pair : count) {
            int number = pair.first;
            int frequency = pair.second;
            // Put the number into the bucket matching its frequency
            buckets[frequency].push_back(number);
        }
        
        // Step 3: Read buckets backward to get the top 'k' elements
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (int num : buckets[i]) {
                result.push_back(num);
                // The moment we hit 'k' items, we are completely done
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;
    }
};