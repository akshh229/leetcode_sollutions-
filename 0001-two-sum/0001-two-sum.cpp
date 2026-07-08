class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int complement = target - num;

            // check if we already saw the complement
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // store current value and its index
            mp[num] = i;
        }

        // problem guarantees one solution, this is just a fallback
        return {};
    }
};
