class Solution {
public:
    bool isPalindrome(int x) {
        // negative numbers and numbers ending with 0 (but not 0 itself) are not palindrome
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reverted = 0;
        // build the reversed half
        while (x > reverted) {
            int digit = x % 10;
            reverted = reverted * 10 + digit;
            x /= 10;
        }

        // even length: x == reverted
        // odd length: x == reverted / 10 (middle digit removed)
        return (x == reverted) || (x == reverted / 10);
    }
};
