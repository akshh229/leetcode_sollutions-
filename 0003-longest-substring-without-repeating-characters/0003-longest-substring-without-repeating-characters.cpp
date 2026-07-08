class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1); // for all ASCII chars
        int n = s.size();
        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++) {
            char c = s[right];

            // if we have seen c and it is inside the current window
            if (lastIndex[c] >= left) {
                left = lastIndex[c] + 1;
            }

            lastIndex[c] = right;
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
