class Solution {
public:
    bool checkPalindrome(string s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }

    bool check(string a, string b) {
        int left = 0, right = a.size() - 1;

        while (left < right && a[left] == b[right]) {
            left++;
            right--;
        }

        return checkPalindrome(a, left, right) ||
               checkPalindrome(b, left, right);
    }

    bool checkPalindromeFormation(string a, string b) {
        return check(a, b) || check(b, a);
    }
};