class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1; // Initialize pointers i and j

        while (i < j) {
            // Convert uppercase letters to lowercase
            if (isalpha(s[i]) && isupper(s[i])) {
                s[i] = tolower(s[i]);
            }
            if (isalpha(s[j]) && isupper(s[j])) {
                s[j] = tolower(s[j]);
            }

            // Skip non-alphanumeric characters
            if (!isalnum(s[i])) {
                i++;
                continue;
            }
            if (!isalnum(s[j])) {
                j--;
                continue;
            }

            // Compare characters at pointers i and j
            if (s[i] != s[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }
};
