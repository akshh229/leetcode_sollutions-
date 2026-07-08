class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> val = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int n = s.size();
        int result = 0;

        for (int i = 0; i < n; i++) {
            int curr = val[s[i]];

            // if next symbol exists and is larger, subtract current
            if (i + 1 < n && curr < val[s[i + 1]]) {
                result -= curr;
            } else {
                result += curr;
            }
        }

        return result;
    }
};
